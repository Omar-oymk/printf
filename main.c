#include "main.h"  // your _printf prototype

int main(void)
{
    int ret1, ret2;

    /* Test with characters */
    ret1 = printf("Char: %c\n", 'A');
    ret2 = _printf("Char: %c\n", 'A');
    printf("printf returned: %d, _printf returned: %d\n\n", ret1, ret2);

    /* Test with string */
    ret1 = printf("String: %s\n", "Hello, world!");
    ret2 = _printf("String: %s\n", "Hello, world!");
    printf("printf returned: %d, _printf returned: %d\n\n", ret1, ret2);

    /* Test with signed int */
    ret1 = printf("Signed int: %d\n", -12345);
    ret2 = _printf("Signed int: %d\n", -12345);
    printf("printf returned: %d, _printf returned: %d\n\n", ret1, ret2);

    /* Test with unsigned int */
    ret1 = printf("Unsigned int: %u\n", 4294967295u);
    ret2 = _printf("Unsigned int: %u\n", 4294967295u);
    printf("printf returned: %d, _printf returned: %d\n\n", ret1, ret2);

    /* Test with hex */
    ret1 = printf("Hex (lower): %x\n", 1024);
    ret2 = _printf("Hex (lower): %x\n", 1024);
    printf("printf returned: %d, _printf returned: %d\n\n", ret1, ret2);

    /* Mixed */
    ret1 = printf("Mix: char=%c, str=%s, int=%d, unsigned=%u, hex=%x\n",
                  'Z', "Test", 1024, 1024, 1024);
    ret2 = _printf("Mix: char=%c, str=%s, int=%d, unsigned=%u, hex=%x\n",
                  'Z', "Test", 1024, 1024, 1024);
    printf("printf returned: %d, _printf returned: %d\n\n", ret1, ret2);

    return (0);
}
