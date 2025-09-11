#include "main.h"


int print_hex_small(int num, int printed_counter, Buffer* buff)
{
    char* hex_str = int_to_hex(num);
    printed_counter = print_str(hex_str, printed_counter, buff);
    return printed_counter;
}

int print_hex_capital(int num, int printed_counter, Buffer* buff)
{
    char* hex_str = int_to_hex_capital(num);
    printed_counter = print_str(hex_str, printed_counter, buff);
    return printed_counter;
}

int print_octal(int num, int printed_counter, Buffer* buff)
{
    char* octal_str = int_to_octal(num);
    printed_counter = print_str(octal_str, printed_counter, buff);
    return printed_counter;
}

int print_binary(int num, int printed_counter, Buffer* buff)
{
    char* binary_str = int_to_binary(num);
    printed_counter = print_str(binary_str, printed_counter, buff);
    return printed_counter;
}