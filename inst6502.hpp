#pragma once
#ifndef _INST_6502_H
#define _INST_6502_H

#include "typedefs.hpp"

// Instruction Reference: http://www.obelisk.me.uk/6502/reference.html
namespace Inst6502
{
    // Implicit Addressing Mode
    namespace I
    {
        inline constexpr byte BRK = 0x00;
        inline constexpr byte CLC = 0x18;
        inline constexpr byte CLD = 0xD8;
        inline constexpr byte CLI = 0x58;
        inline constexpr byte CLV = 0xB8;
        inline constexpr byte DEX = 0xCA;
        inline constexpr byte DEY = 0x88;
        inline constexpr byte INX = 0xE8;
        inline constexpr byte INY = 0xC8;
        inline constexpr byte NOP = 0xEA;
        inline constexpr byte PHA = 0x48;
        inline constexpr byte PHP = 0x08;
        inline constexpr byte PLA = 0x68;
        inline constexpr byte PLP = 0x28;
        inline constexpr byte RTI = 0x40;
        inline constexpr byte RTS = 0x60;
        inline constexpr byte SEC = 0x38;
        inline constexpr byte SED = 0xF8;
        inline constexpr byte SEI = 0x78;
        inline constexpr byte TAX = 0xAA;
        inline constexpr byte TAY = 0xA8;
        inline constexpr byte TSX = 0xBA;
        inline constexpr byte TXA = 0x8A;
        inline constexpr byte TXS = 0x9A;
        inline constexpr byte TYA = 0x98;
    }  // namespace I

    // Accumulator Addressing Mode
    namespace AC
    {
        inline constexpr byte ASL = 0x0A;
        inline constexpr byte LSR = 0x4A;
        inline constexpr byte ROL = 0x2A;
        inline constexpr byte ROR = 0x6A;
    }  // namespace AC

    // Immediate Addressing Mode
    namespace IM
    {
        inline constexpr byte ADC = 0x69;
        inline constexpr byte AND = 0x29;
        inline constexpr byte CMP = 0xC9;
        inline constexpr byte CPX = 0xE0;
        inline constexpr byte CPY = 0xC0;
        inline constexpr byte EOR = 0x49;
        inline constexpr byte LDA = 0xA9;
        inline constexpr byte LDX = 0xA2;
        inline constexpr byte LDY = 0xA0;
        inline constexpr byte ORA = 0x09;
        inline constexpr byte SBC = 0xE9;
    }  // namespace IM

    // Zero Page Addressing Mode
    namespace ZP
    {
        inline constexpr byte ADC = 0x65;
        inline constexpr byte AND = 0x25;
        inline constexpr byte ASL = 0x06;
        inline constexpr byte BIT = 0x24;
        inline constexpr byte CMP = 0xC5;
        inline constexpr byte CPX = 0xE4;
        inline constexpr byte CPY = 0xC4;
        inline constexpr byte DEC = 0xC6;
        inline constexpr byte EOR = 0x45;
        inline constexpr byte INC = 0xE6;
        inline constexpr byte LDA = 0xA5;
        inline constexpr byte LDX = 0xA6;
        inline constexpr byte LDY = 0xA4;
        inline constexpr byte LSR = 0x46;
        inline constexpr byte ORA = 0x05;
        inline constexpr byte ROL = 0x26;
        inline constexpr byte ROR = 0x66;
        inline constexpr byte SBC = 0xE5;
        inline constexpr byte STA = 0x85;
        inline constexpr byte STX = 0x86;
        inline constexpr byte STY = 0x84;
    }  // namespace ZP

    // Zero Page,X Addressing Mode
    namespace ZPX
    {
        inline constexpr byte ADC = 0x75;
        inline constexpr byte AND = 0x35;
        inline constexpr byte ASL = 0x16;
        inline constexpr byte CMP = 0xD5;
        inline constexpr byte DEC = 0xD6;
        inline constexpr byte EOR = 0x55;
        inline constexpr byte INC = 0xF6;
        inline constexpr byte LDA = 0xB5;
        inline constexpr byte LDY = 0xB4;
        inline constexpr byte LSR = 0x56;
        inline constexpr byte ORA = 0x15;
        inline constexpr byte ROL = 0x36;
        inline constexpr byte ROR = 0x76;
        inline constexpr byte SBC = 0xF5;
        inline constexpr byte STA = 0x95;
        inline constexpr byte STY = 0x94;
    }  // namespace ZPX

    // Zero Page,Y Addressing Mode
    namespace ZPY
    {
        inline constexpr byte LDX = 0xB6;
        inline constexpr byte STX = 0x96;
    }  // namespace ZPY

    namespace REL
    {
        inline constexpr byte BCC = 0x90;
        inline constexpr byte BCS = 0xB0;
        inline constexpr byte BEQ = 0xF0;
        inline constexpr byte BMI = 0x30;
        inline constexpr byte BNE = 0xD0;
        inline constexpr byte BPL = 0x10;
        inline constexpr byte BVC = 0x50;
        inline constexpr byte BVS = 0x70;
    }  // namespace REL

    // Absolute Addressing Mode
    namespace ABS
    {
        inline constexpr byte ADC = 0x6D;
        inline constexpr byte AND = 0x2D;
        inline constexpr byte ASL = 0x0E;
        inline constexpr byte BIT = 0x2C;
        inline constexpr byte CMP = 0xCD;
        inline constexpr byte CPX = 0xEC;
        inline constexpr byte CPY = 0xCC;
        inline constexpr byte DEC = 0xCE;
        inline constexpr byte EOR = 0x4D;
        inline constexpr byte INC = 0xEE;
        inline constexpr byte JMP = 0x4C;
        inline constexpr byte JSR = 0x20;
        inline constexpr byte LDA = 0xAD;
        inline constexpr byte LDX = 0xAE;
        inline constexpr byte LDY = 0xAC;
        inline constexpr byte LSR = 0x4E;
        inline constexpr byte ORA = 0x0D;
        inline constexpr byte ROL = 0x2E;
        inline constexpr byte ROR = 0x6E;
        inline constexpr byte SBC = 0xED;
        inline constexpr byte STA = 0x8D;
        inline constexpr byte STX = 0x8E;
        inline constexpr byte STY = 0x8C;
    }  // namespace ABS

    // Absolute,X Addressing Mode
    namespace ABX
    {
        inline constexpr byte ADC = 0x7D;
        inline constexpr byte AND = 0x3D;
        inline constexpr byte ASL = 0x1E;
        inline constexpr byte CMP = 0xDD;
        inline constexpr byte DEC = 0xDE;
        inline constexpr byte EOR = 0x5D;
        inline constexpr byte INC = 0xFE;
        inline constexpr byte LDA = 0xBD;
        inline constexpr byte LDY = 0xBC;
        inline constexpr byte LSR = 0x5E;
        inline constexpr byte ORA = 0x1D;
        inline constexpr byte ROL = 0x3E;
        inline constexpr byte ROR = 0x7E;
        inline constexpr byte SBC = 0xFD;
        inline constexpr byte STA = 0x9D;
    }  // namespace ABX

    // Absolute,Y Addressing Mode
    namespace ABY
    {
        inline constexpr byte ADC = 0x79;
        inline constexpr byte AND = 0x39;
        inline constexpr byte CMP = 0xD9;
        inline constexpr byte EOR = 0x59;
        inline constexpr byte LDA = 0xB9;
        inline constexpr byte LDX = 0xBE;
        inline constexpr byte ORA = 0x19;
        inline constexpr byte SBC = 0xF9;
        inline constexpr byte STA = 0x99;
    }  // namespace ABY

    namespace ID
    {
        inline constexpr byte JMP = 0x6C;
    }  // namespace ID

    // Indexed Indirect Addressing Mode
    namespace IDX
    {
        inline constexpr byte ADC = 0x61;
        inline constexpr byte AND = 0x21;
        inline constexpr byte CMP = 0xC1;
        inline constexpr byte EOR = 0x41;
        inline constexpr byte LDA = 0xA1;
        inline constexpr byte ORA = 0x01;
        inline constexpr byte SBC = 0xE1;
        inline constexpr byte STA = 0x81;
    }  // namespace IDX

    // Indirect Indexed Addressing Mode
    namespace IDY
    {
        inline constexpr byte ADC = 0x71;
        inline constexpr byte AND = 0x31;
        inline constexpr byte CMP = 0xD1;
        inline constexpr byte EOR = 0x51;
        inline constexpr byte LDA = 0xB1;
        inline constexpr byte ORA = 0x11;
        inline constexpr byte SBC = 0xF1;
        inline constexpr byte STA = 0x91;
    }  // namespace IDY
}  // namespace Inst6502

#endif