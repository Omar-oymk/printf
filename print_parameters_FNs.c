#include "main.h"

/**
 * print_char - Prints a single character.
 * @c: The character to print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Adds a single character @c to the buffer and updates the printed
 * character count.
 *
 * Return: Updated printed character count.
 */
int print_char(char c, int printed_counter, Buffer* buff)
{
    add_to_buffer_char(buff, c);
    printed_counter++;
    return printed_counter;
}

/**
 * print_str - Prints a string.
 * @str: Pointer to the null-terminated string to print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Adds the string @str to the buffer and updates the printed character
 * count by the length of the string.
 *
 * Return: Updated printed character count.
 */
int print_str(char* str, int printed_counter, Buffer* buff)
{
    // int i;
    // for (i = 0; i < _strlen(str); i++)
    // {
    //     _putchar(str[i]);
    // }
    add_to_buffer(buff, str);
    printed_counter += _strlen(str);
    return(printed_counter);
}

/**
 * print_int - Prints a signed integer.
 * @num: The integer to print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Converts a signed integer @num to its string representation and adds
 * it to the buffer. Handles negative numbers by printing a '-' sign.
 * Also manages the special case of INT_MIN. Updates the printed
 * character count accordingly.
 *
 * Return: Updated printed character count.
 */
int print_int(int num, int printed_counter, Buffer* buff)
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
        // _putchar('-');
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
    // i--;

    // while (i >= 0)
    // {
    //     _putchar(str[i]);
    //     i--;
    // }
    if (negative == 1)
    {
        add_to_buffer_char(buff, '-');
        printed_counter++;
    }
    
    _revstr(str);
    add_to_buffer(buff, str);

    printed_counter += _strlen(str);
    free(str);

    return printed_counter;
}

/**
 * print_unsigned_int - Prints an unsigned integer.
 * @num: The unsigned integer to print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Converts an unsigned integer @num to its string representation and
 * adds it to the buffer. Updates the printed character count
 * accordingly.
 *
 * Return: Updated printed character count.
 */
int print_unsigned_int(unsigned int num, int printed_counter, Buffer* buff)
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
    // i--;

    // while (i >= 0)
    // {
    //     _putchar(str[i]);
    //     i--;
    // }

    _revstr(str);
    add_to_buffer(buff, str);

    printed_counter += _strlen(str);
    free(str);

    return printed_counter;
}