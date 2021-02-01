#pragma once
#ifndef _MEMORY_H
#define _MEMORY_H

#include <array>

#include "typedefs.hpp"

struct Memory
{
    static constexpr u32 MAX_MEM = 1024 * 64;
    std::array<byte, MAX_MEM> data;

    void init() { data.fill(0); }

    byte operator[](u32 address) const { return data[address]; }
    byte& operator[](u32 address) { return data[address]; }
};

#endif