#include "main.h"



int _printf(const char *format, ...)
{
    int Print_counter = 0, i = 0;

    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i+1] == 'd')
            {

            }
            else if (format[i+1] == 'c')
            {

            }
            else if (format[i+1] == 'c')
            {
                
            }
        }
        else if (format[i] == '\\')
        {

        }
        else
        {
            Print_counter++;
            _putchar(format[i]);
        }
    }
}
