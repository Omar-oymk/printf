#include "main.h"



int _printf(const char *format, ...)
{
    int Print_counter = 0, i = 0;
    Buffer buf = {{0}, 0};
    va_list args;
    va_start(args, format);


    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i+1] == 'd' || format[i+1] == 'i')
            {
                Print_counter = print_int(va_arg(args, int), Print_counter, &buf);
            }
            else if (format[i+1] == 'c')
            {
                Print_counter = print_char(va_arg(args, int), Print_counter, &buf);

            }
            else if (format[i+1] == 's')
            {
                Print_counter = print_str(va_arg(args, char*), Print_counter, &buf);
            }
            else if (format[i+1] == 'x')
            {
                Print_counter = print_hex_small(va_arg(args, int), Print_counter, &buf);
            }
            else if (format[i+1] == 'X')
            {
                Print_counter = print_hex_capital(va_arg(args, int), Print_counter, &buf);
            }
            else if (format[i+1] == 'o')
            {
                Print_counter = print_octal(va_arg(args, int), Print_counter, &buf);
            }
            else if (format[i+1] == 'b')
            {
                Print_counter = print_binary(va_arg(args, int), Print_counter, &buf);
            }
            else if (format[i+1] == 'u')
            {
                Print_counter = print_unsigned_int(va_arg(args, unsigned int), Print_counter, &buf);
            }
            i += 2;
        }
        else if (format[i] == '\\')
        {
            if (format[i+1] == 'n')
            {
                // _putchar('\n');
                add_to_buffer_char(&buf, '\n');
            }
            i +=2;
        }
        else
        {
            // _putchar(format[i]);
            add_to_buffer_char(&buf, format[i]);

            Print_counter++;
            i++;
        }
        va_end(args);
    }
    flush_buffer(&buf);

    return Print_counter;
}
