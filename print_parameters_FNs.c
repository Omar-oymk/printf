#include "main.h"


int print_char(char c, int printed_counter, char* buff)
{
    _putchar(c);
    printed_counter++;
    return printed_counter;
}

int print_str(char* str, int printed_counter, char* buff)
{
    int i;
    for (i = 0; i < _strlen(str); i++)
    {
        _putchar(str[i]);
    }
    printed_counter += _strlen(str);
    return(printed_counter);
}

int print_int(int num, int printed_counter, char* buff)
{
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
        // special case INT_MIN
        if (num == INT_MIN)
        {
            printed_counter = print_str("2147483648", printed_counter, buff);
            free(str);
            return printed_counter;
        }
        num = - num;
    }

    while (num != 0)
    {
        str[i] = num % 10 + '0';
        num = num / 10;
        i++;
    }

    str[i] = '\0'; 
    i--;

    while (i >= 0)
    {
        _putchar(str[i]);
        i--;
    }

    printed_counter += _strlen(str);
    free(str);

    return printed_counter;
}

int print_unsigned_int(unsigned int num, int printed_counter, char* buff)
{
    int i = 0;
    
    if (num == 0)
    {
        _putchar('0');
        return ++printed_counter;
    }

    char* str = malloc(11);

    while (num != 0)
    {
        str[i] = num % 10 + '0';
        num = num / 10;
        i++;
    }

    str[i] = '\0'; 
    i--;

    while (i >= 0)
    {
        _putchar(str[i]);
        i--;
    }

    printed_counter += _strlen(str);
    free(str);

    return printed_counter;
}