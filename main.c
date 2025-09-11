#include <stdio.h>
#include "main.h"

int main(void)
{
    int count_std, count_custom;

    /* 1. Zero */
    count_std = printf("Binary (0): %s\n", "0");
    count_custom = _printf("Binary (0): %b\n", 0);
    printf("STD count=%d, Custom count=%d\n\n", count_std, count_custom);

    /* 2. Small number */
    count_std = printf("Binary (5): %s\n", "101");
    count_custom = _printf("Binary (5): %b\n", 5);
    printf("STD count=%d, Custom count=%d\n\n", count_std, count_custom);

    /* 3. Power of two */
    count_std = printf("Binary (16): %s\n", "10000");
    count_custom = _printf("Binary (16): %b\n", 16);
    printf("STD count=%d, Custom count=%d\n\n", count_std, count_custom);

    /* 4. Max positive int */
    count_std = printf("Binary (INT_MAX): %s\n", 
                       "1111111111111111111111111111111");
    count_custom = _printf("Binary (INT_MAX): %b\n", INT_MAX);
    printf("STD count=%d, Custom count=%d\n\n", count_std, count_custom);

    /* 5. Unsigned wraparound (UINT_MAX) */
    count_std = printf("Binary (UINT_MAX): %s\n", 
                       "11111111111111111111111111111111");
    count_custom = _printf("Binary (UINT_MAX): %b\n", UINT_MAX);
    printf("STD count=%d, Custom count=%d\n\n", count_std, count_custom);

    return 0;
}
