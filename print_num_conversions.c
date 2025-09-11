#include "main.h"


int print_hex_small(int num, int printed_counter)
{
    char* hex_str = int_to_hex(num);
    printed_counter = print_str(hex_str, printed_counter);
    return printed_counter;
}