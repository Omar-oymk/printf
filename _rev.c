#include "main.h"

/**
 * _revstr - Reverses a string in place.
 * @str: Pointer to the string to be reversed.
 *
 * Description:
 * This function takes a string and reverses its characters in place
 * (without using extra memory for another string). It works by swapping
 * the first character with the last, the second with the second-last,
 * and so on until the middle of the string is reached.
 *
 * Note:
 * The input string must be null-terminated.
 * Behavior is undefined if @str is NULL.
 *
 * Return: Nothing (the string is modified in place).
 */
void _revstr(char* str)
{
    int length = _strlen(str);
    int i;
    char temp;

    length--;
    for (i = 0; i < length; i++)
    {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        length--;
    }
}