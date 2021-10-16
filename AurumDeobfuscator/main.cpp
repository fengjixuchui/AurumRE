#include <windows.h>
#include <iostream>

#include "deobfuscator.hpp"

#ifndef _WIN64
#error "Only x64 is supported"
#endif

inline void print_usage(void)
{
    printf("[=] usage: *.exe <binPath>\n");
}

int main(int argc, const char** argv, const char** envp)
{
    if (argc != 2)
    {
        print_usage();
        return EXIT_FAILURE;
    }

    const auto bin_path = argv[1];
    auto session = deobfuscator(bin_path);
    session.find_jumptable();

    return EXIT_SUCCESS;
}