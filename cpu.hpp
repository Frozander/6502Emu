#pragma once
#ifndef _CPU_H
#define _CPU_H

#include "inst6502.hpp"
#include "memory.hpp"
#include "typedefs.hpp"

struct CPU
{
    word PC;  // Program Counter
    byte SP;  // Stack Pointer

    byte A, X, Y;  // Registers

    // Status Flags
    byte C : 1;
    byte Z : 1;
    byte I : 1;
    byte D : 1;
    byte B : 1;
    byte V : 1;
    byte N : 1;

    void reset(Memory& memory)
    {
        PC = 0xFFFC;
        SP = 0x00;
        C = Z = I = D = B = V = N = 0;
        A = X = Y = 0;
        memory.init();
    }

    byte fetch_byte(u32& n_cycles, Memory& memory)
    {
        n_cycles--;
        return memory[PC++];
    }

    void execute(u32 n_cycles, Memory& memory)
    {
        while (n_cycles > 0)
        {
            byte ins = fetch_byte(n_cycles, memory);
            printf("Inst: %X    Address: %X\n", ins, PC - 1);

            switch (ins)
            {
                case Inst6502::IM::LDA:
                    A = fetch_byte(n_cycles, memory);
                    Z = (A == 0);
                    N = (A >> 7 == 1);
                    printf("INS_LDA_IM - A: %X  Z: %d   N: %d\n", A, Z, N);
                    break;

                default:
                    printf("Instruction not handled: %X\n", ins);
            }
        }
    }
};

#endif