#include "main.h"


char* int_to_hex(int num)
{
    int i;
    char* hex_str = malloc(9);

    if (!hex_str) return NULL;

    for (i = 0; num != 0; i++)
    {
        int digit = num % 16;
        if (digit < 10)
            hex_str[i] = digit + '0';
        else
            hex_str[i] = 'a' + (digit - 10);
        num /= 16;
    }
    hex_str[i] = '\0';
    _revstr(hex_str);

    return hex_str;
}