#include "main.h"

/**
 * int_to_hex - Converts an unsigned integer to a lowercase hexadecimal string.
 * @num: The unsigned integer to convert.
 *
 * Description:
 * This function dynamically allocates memory for a string that holds the
 * hexadecimal representation of @num. Letters are represented in lowercase
 * (a–f). The string is null-terminated and reversed to match the correct
 * order. Caller is responsible for freeing the returned string.
 *
 * Return: Pointer to the resulting string, or NULL if memory allocation fails.
 */
char* int_to_hex(unsigned int num)
{
    int i;
    char* hex_str = malloc(17);

    if (!hex_str) return NULL;

    if (num == 0)
    {
        hex_str[0] = '0';
        hex_str[1] = '\0';
        return hex_str;
    }

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

/**
 * int_to_hex_capital - Converts an unsigned integer to an uppercase hexadecimal string.
 * @num: The unsigned integer to convert.
 *
 * Description:
 * This function dynamically allocates memory for a string that holds the
 * hexadecimal representation of @num. Letters are represented in uppercase
 * (A–F). The string is null-terminated and reversed to match the correct
 * order. Caller is responsible for freeing the returned string.
 *
 * Return: Pointer to the resulting string, or NULL if memory allocation fails.
 */
char* int_to_hex_capital(unsigned int num)
{
    int i;
    char* hex_str = malloc(17);

    if (!hex_str) return NULL;

    if (num == 0)
    {
        hex_str[0] = '0';
        hex_str[1] = '\0';
        return hex_str;
    }

    for (i = 0; num != 0; i++)
    {
        int digit = num % 16;
        if (digit < 10)
            hex_str[i] = digit + '0';
        else
            hex_str[i] = 'A' + (digit - 10);
        num /= 16;
    }
    hex_str[i] = '\0';
    _revstr(hex_str);

    return hex_str;
}

/**
 * int_to_octal - Converts an unsigned integer to an octal string.
 * @num: The unsigned integer to convert.
 *
 * Description:
 * This function dynamically allocates memory for a string that holds the
 * octal representation of @num. The string is null-terminated and reversed
 * to match the correct order. Caller is responsible for freeing the returned
 * string.
 *
 * Return: Pointer to the resulting string, or NULL if memory allocation fails.
 */
char* int_to_octal(unsigned int num)
{
    int i;
    char* octal_str = malloc(23);

    if (!octal_str) return NULL;

    if (num == 0)
    {
        octal_str[0] = '0';
        octal_str[1] = '\0';
        return octal_str;
    }

    for (i = 0; num != 0; i++)
    {
        int digit = num % 8;
        octal_str[i] = digit + '0';
        num /= 8;
    }
    octal_str[i] = '\0';
    _revstr(octal_str);

    return octal_str;
}

/**
 * int_to_binary - Converts an unsigned integer to a binary string.
 * @num: The unsigned integer to convert.
 *
 * Description:
 * This function dynamically allocates memory for a string that holds the
 * binary representation of @num. The string is null-terminated and reversed
 * to match the correct order. Caller is responsible for freeing the returned
 * string.
 *
 * Return: Pointer to the resulting string, or NULL if memory allocation fails.
 */
char* int_to_binary(unsigned int num)
{
    int i;
    char* binary_str = malloc(65);

    if (!binary_str) return NULL;

    if (num == 0)
    {
        binary_str[0] = '0';
        binary_str[1] = '\0';
        return binary_str;
    }

    for (i = 0; num != 0; i++)
    {
        int digit = num % 2;
        binary_str[i] = digit + '0';
        num /= 2;
    }
    binary_str[i] = '\0';
    _revstr(binary_str);

    return binary_str;
}