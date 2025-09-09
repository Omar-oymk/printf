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
    int i = 0;
    char* str = "";
    int negative = 0;

    if (num == 0)
    {
        str = '0';
        _putchar(str);
    }

    if (num < 0)
    {
        negative = 1;
        _putchar('-');
    }

    while (num != 0)
    {
        str[i] = num % 10;
        num = num / 10;
        i++;
    }

    i--;

    while (i >= 0)
    {
        _putchar(str[i]);
        i--;
    }

    if (negative == 1)
        printed_counter += _strlen(str) + 1;
    else
        printed_counter += _strlen(str);

    return printed_counter;
}