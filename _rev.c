#include "main.h"


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