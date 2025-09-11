#include "main.h"

int main(void)
{
    int a = -12345;
    unsigned int b = 4294967295; // UINT_MAX
    char *str = "Hello, world!";

    /* Characters */
    _printf("Char: %c\n", 'A');
    printf("Char: %c\n", 'A');

    /* Strings */
    _printf("String: %s\n", str);
    printf("String: %s\n", str);

    /* Signed integers */
    _printf("Signed int: %d\n", a);
    printf("Signed int: %d\n", a);

    _printf("Signed int (i): %i\n", a);
    printf("Signed int (i): %i\n", a);

    /* Unsigned integers */
    _printf("Unsigned int: %u\n", b);
    printf("Unsigned int: %u\n", b);

    /* Hexadecimal */
    _printf("Hex (lower): %x\n", b);
    printf("Hex (lower): %x\n", b);

    /* Mixed */
    _printf("Mix: char=%c, str=%s, int=%d, unsigned=%u, hex=%x\n", 
            'Z', "Test", 1024, 1024, 1024);
    printf("Mix: char=%c, str=%s, int=%d, unsigned=%u, hex=%x\n", 
           'Z', "Test", 1024, 1024, 1024);

    return (0);
}

