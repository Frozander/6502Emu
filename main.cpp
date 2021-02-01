#include <cstdio>
#include <cstdlib>

#include "cpu.hpp"
#include "inst6502.hpp"
#include "memory.hpp"

int main(int argc, char const *argv[])
{
    CPU cpu;
    Memory mem;
    cpu.reset(mem);
    // inline program
    mem[0xFFFC] = Inst6502::IM::LDA;
    mem[0xFFFD] = 0x42;
    // end inline program
    cpu.execute(2, mem);
    return 0;
}
