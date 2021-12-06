//  example code to use with jenkins pipeline build
//  gf2_9_mul_test.c
//  gf
//
//  Created by Samira C. Oliva Madrigal on 12/5/21.
//  Copyright © 2021 Samira C. Oliva Madrigal. All rights reserved.

#include "gf2_9_mul_test.h"

TVGF2_9 *get_tvs(void)
{
    FILE *fp;
    char buf[BUF_MAX];
    TVGF2_9 *expected;
    
    expected = malloc(sizeof(TVGF2_9)*GF9_2_CARDINALITY);
    int i = 0;
    
    if(!(fp = fopen(TVS, "r"))) return NULL;
    while(fgets(buf, BUF_MAX, fp))
    {
        expected[i].a = (uint32_t)strtol(strtok(buf,"_"), (char**)NULL, 2);
        expected[i].b = (uint32_t)strtol(strtok(NULL,"_"), (char**)NULL, 2);
        expected[i].c = (uint32_t)strtol(strtok(NULL, "\n"), (char**)NULL, 2);
        i++;
    }
    fclose(fp);
    return expected;
}

bool test_gf2_9_mul(void)
{
    TVGF2_9 *tvs;
    uint32_t actual, expected;
    
    if(!(tvs = get_tvs())) return false;
    for(int i = 0; i < GF9_2_CARDINALITY; i++)
    {
        actual = gf2_9_mul(tvs[i].a, tvs[i].b);
        expected = (uint32_t)tvs[i].c;
        if(actual != expected)
        {
            printf("a=%02x\tb=%02x\tACT=%02x\tEXP==%02x\n", tvs[i].a, tvs[i].b, actual, expected);
            return false;
        }
    }
    free(tvs);
    return true;
}






