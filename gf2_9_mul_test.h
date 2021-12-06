#ifndef gf2_9_mul_test_h
#define gf2_9_mul_test_h

#include "gf2_9_mul.h"
#include <assert.h>

typedef struct tvgf2_9
{
    uint16_t a;
    uint16_t b;
    uint32_t c;
}TVGF2_9;

#define GF9_2_CARDINALITY 512
#define BUF_MAX 80
#define TVS "/Users/samiracarolinaolivamadrigal/gf/gf/gf2_9_tvs.mem"
#define TC_PASSED printf("TEST CASE PASSED\n")
#define TC_FAILED printf("TEST CASE FAILED\n")
#define TC_RESULT(x) (x ? TC_PASSED : TC_FAILED)
bool test_gf2_9_mul(void);

#endif /* gf2_9_mul_test_h */

