#ifndef gf2_9_mul_h
#define gf2_9_mul_h

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

/*
    GF(2^9) multiplication
    pre: a, b field elements of deg(8) represented with 9 bits
    post: a*b polynomial of max degree 16 represented with 17 bits
*/
uint32_t gf2_9_mul(uint16_t a, uint16_t b);

#endif /* gf2_9_mul_h */

