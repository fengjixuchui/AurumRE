#include "deobfuscator.hpp"

deobfuscator::deobfuscator(const char* path)
	: pe(pe_analyzer(path))
{
}

deobfuscator::~deobfuscator()
{
}

uint8_t* deobfuscator::find_jumptable()
{
	/* Locate the section that contains jumptables and stubs */
	uint32_t section_count = 0;
	this->pe.each_section([&](void*) -> bool { section_count++; return true; }, ".text");
	if (!section_count) return nullptr;
	const auto target_section = section_count;
	printf("[*] section index found: %d\n", target_section);

	uint32_t number_of_jmp = 0;
	section_count = 0;
	this->pe.each_section([&](IMAGE_SECTION_HEADER* section) -> bool
		{
			if (section_count == target_section-1)
			{
				const auto section_name = reinterpret_cast<const char*>(section->Name);
				const auto section_start = reinterpret_cast<uint8_t*>(pe.base() + section->VirtualAddress);
				const auto section_size = static_cast<deobfuscator::size_type>(section->SizeOfRawData);
				const auto section_end = section_start + section_size;
				printf("[*] start:0x%p, end:0x%p, size:0x%llX\n", section_start, section_end, section_size);

				for (auto current = section_start; current < section_end; current++)
				{
					if (*reinterpret_cast<uint8_t*>(current) == OPCODE_JMP)
					{
						/* Resolve relative address */
						const auto resolve_relative = [](uint8_t* instruction, uint32_t offset, uint32_t instruction_size)
						{
							const auto rip = *reinterpret_cast<uint32_t*>(instruction + offset);
							return instruction + instruction_size + rip;
						};

						deobfuscator::size_type jmp_stub_size = 0;
						uint8_t* previous = current;
						while (1)
						{
							previous--; jmp_stub_size++;
							if (/* is in range? */ !(!(previous < section_start) && !(section_end < previous))
							||  /* is previous? */ *reinterpret_cast<uint8_t*>(previous) == OPCODE_JMP)
								break;
						}
						jmp_stub_size == 0 ? jmp_stub_size : jmp_stub_size--;

						/* E9 91 5A 00 00 | jmp loc_14003DAC2 */
						/* <------------>                     */
						/*    <--------->                     */
						const auto jmp_destination = resolve_relative(current, 1, 5);
						printf("[*] %.8s:0x%p | jmp 0x%p (0x%llX)\n", section_name, current, jmp_destination, jmp_stub_size);

						number_of_jmp++;
					}
				}
			}
			else
			{
				/* not the jmptable section, link to the table */


			}
			section_count++;
			return true;
		}, ".text");

	printf("[*] # of jmp: %d\n", number_of_jmp);

	return nullptr;
}

