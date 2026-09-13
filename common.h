//
// Created by Hedi Soula on 11/09/2026.
//

#ifndef COMMON_H
#define COMMON_H

#include <sys/_types/_u_int16_t.h>
#include <sys/_types/_u_int8_t.h>

typedef u_int8_t u8;
typedef u_int16_t u16;
typedef char s8;

static __inline u8 half_carry_add_u8(u8 a, u8 b) {
    return ((a & 0xF) + (b & 0xF) & 0xF) == 0xF ? 1 : 0;
}

static __inline u8 half_carry_add_u16(u16 a, u16 b) {
    return ((a & 0xFF) + (b & 0xFF) & 0xFF) == 0xFF ? 1 : 0;
}

#endif
