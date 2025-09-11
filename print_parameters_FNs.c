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
    // 0
    int i = 0;
    int negative = 0;
    
    if (num == 0)
    {
        _putchar('0');
        return ++printed_counter;
    }
    
    char* str = malloc(11);
    
    if (num < 0)
    {
        negative = 1;
        _putchar('-');
        printed_counter++;
    }

    while (num != 0)
    {
        str[i] = num % 10 + '0';
        num = num / 10;
        i++;
    }

    i--;

    while (i >= 0)
    {
        _putchar(str[i]);
        i--;
    }

    printed_counter += _strlen(str);

    return printed_counter;
}