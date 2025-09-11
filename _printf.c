#include "main.h"



int _printf(const char *format, ...)
{
    int Print_counter = 0, i = 0;
    va_list args;
    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i+1] == 'd' || format[i+1] == 'i')
            {
                Print_counter += print_int(va_arg(args, int), Print_counter);
            }
            else if (format[i+1] == 'c')
            {
                Print_counter += print_char(va_arg(args, int), Print_counter);

            }
            else if (format[i+1] == 's')
            {
                Print_counter += print_str(va_arg(args, char*), Print_counter);
            }
            else if (format[i+1] == 'x')
            {
                Print_counter += print_hex_small(va_arg(args, int), Print_counter);
            }
            i += 2;
        }
        else if (format[i] == '\\')
        {
            if (format[i+1] == 'n')
            {
                _putchar('\n');
            }
            i +=2;
        }
        else
        {
            Print_counter++;
            _putchar(format[i]);
            i++;
        }
        va_end(args);
    }
    return Print_counter;
}
