#pragma once
#include <windows.h>
#include <iostream>
#include <filesystem>

class pe_analyzer
{
	using size_type = size_t;
	using section_callback_t = bool(*)(IMAGE_SECTION_HEADER* section);

public:
	explicit pe_analyzer(const char* path);
	~pe_analyzer();

	uint8_t* base() noexcept;

	IMAGE_DOS_HEADER* dos_header() noexcept;
	IMAGE_NT_HEADERS* nt_headers() noexcept;

	IMAGE_SECTION_HEADER* section(uint32_t i) noexcept;

	template<typename C> bool each_section(C callback)
	{
		auto* section = IMAGE_FIRST_SECTION(this->nt_headers());
		if (!section)
			return false;

		for (auto i = 0; i < this->nt_headers()->FileHeader.NumberOfSections; i++, section++)
		{
			const auto section_base = this->blob + section->VirtualAddress;
			const auto section_size = section->SizeOfRawData;
			const auto section_name = reinterpret_cast<const char*>(section->Name);

			if (!callback(section))
				return false;
		}

		return true;
	}

	template<typename C> bool each_section(C callback, const char* specify_section)
	{
		this->each_section([&](IMAGE_SECTION_HEADER* section)
			{
				if (!strcmp(specify_section, reinterpret_cast<const char*>(section->Name)))
					if (!callback(section))
						return false;

				return true;
			});

		return true;
	}

private:
	uint8_t* blob;
};

