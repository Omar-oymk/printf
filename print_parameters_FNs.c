#include "main.h"


int print_char(char c, int printed_counter)
{
    _putchar(c);
    printed_counter++;
    return printed_counter;
}

int print_str(char* str, int printed_counter)
{
    int i;
    for (i = 0; i < _strlen(str); i++)
    {
        _putchar(str[i]);
    }
    printed_counter += _strlen(str);
    return(printed_counter);
}

int print_int(int num, int printed_counter)
{
    int i;
    if (num == 0)
        _putchar(num);
    while (num)
    {
        
    }
}