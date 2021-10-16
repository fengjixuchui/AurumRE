#pragma once
#include <windows.h>
#include <iostream>
#include <filesystem>

#include "pe_analyzer.hpp"

#define OPCODE_JMP 0xE9

class deobfuscator
{
	using size_type = size_t;

public:
	explicit deobfuscator(const char* path);
	~deobfuscator();

	uint8_t* find_jumptable();

private:
	//uint8_t* find_jumptable();

	pe_analyzer pe;
};
