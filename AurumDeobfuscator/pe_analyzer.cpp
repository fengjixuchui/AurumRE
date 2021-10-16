#include "pe_analyzer.hpp"

pe_analyzer::pe_analyzer(const char* path)
{
	const auto lib = reinterpret_cast<uint8_t*>(LoadLibraryA(path));
	if (!lib)
	{
		printf("[!] pe_analyzer: failed to load blob\n");
		return;
	}

	this->blob = lib;
}

pe_analyzer::~pe_analyzer()
{
	if (this->blob)
		FreeLibrary(reinterpret_cast<HMODULE>(this->blob));
}

uint8_t* pe_analyzer::base() noexcept
{
	return this->blob;
}

IMAGE_DOS_HEADER* pe_analyzer::dos_header() noexcept
{
	return reinterpret_cast<IMAGE_DOS_HEADER*>(this->blob);
}

IMAGE_NT_HEADERS* pe_analyzer::nt_headers() noexcept
{
	return reinterpret_cast<IMAGE_NT_HEADERS*>(this->blob + this->dos_header()->e_lfanew);
}

IMAGE_SECTION_HEADER* pe_analyzer::section(uint32_t i) noexcept
{
	return reinterpret_cast<IMAGE_SECTION_HEADER*>(IMAGE_FIRST_SECTION(this->nt_headers()));
}
