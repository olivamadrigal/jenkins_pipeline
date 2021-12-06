#include "gf2_9_mul.h"

uint32_t gf2_9_mul(uint16_t a, uint16_t b)
{
    uint32_t at, ct;
    at = a;
    ct = 0;
    for(int i=0; i < 9; i++)
        ct = b & (0x00000001 << i) ? (at << i) ^ ct : ct;
    return ct;
}

