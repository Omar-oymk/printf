#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string composed of zero or more directives.
 *          The format string is composed of ordinary characters that
 *          are copied unchanged to the output and conversion
 *          specifications, each of which results in fetching zero or
 *          more subsequent arguments.
 *
 * Description:
 * This function emulates the behavior of the standard printf function,
 * supporting a subset of format specifiers. It uses a local buffer to
 * minimize system calls by batching characters before writing them to
 * standard output.
 *
 * Supported conversion specifiers:
 *   %d, %i - Signed decimal integer
 *   %u     - Unsigned decimal integer
 *   %c     - Single character
 *   %s     - String of characters
 *   %x     - Unsigned hexadecimal integer (lowercase)
 *   %X     - Unsigned hexadecimal integer (uppercase)
 *   %o     - Unsigned octal integer
 *   %b     - Unsigned binary integer
 *
 * Special handling:
 *   \\n    - Interpreted as a newline character
 *
 * Return: The number of characters printed (excluding the null byte
 *         used to end output to strings).
 */
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
