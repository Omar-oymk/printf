#include "main.h"

/**
 * print_hex_small - Prints an integer as a lowercase hexadecimal string.
 * @num: The integer to convert and print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Converts @num into its lowercase hexadecimal representation and writes
 * it into the buffer using print_str. Updates the total printed character
 * counter accordingly.
 *
 * Return: Updated printed character count.
 */
int print_hex_small(int num, int printed_counter, Buffer* buff)
{
    char* hex_str = int_to_hex(num);
    printed_counter = print_str(hex_str, printed_counter, buff);
    return printed_counter;
}

/**
 * print_hex_capital - Prints an integer as an uppercase hexadecimal string.
 * @num: The integer to convert and print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Converts @num into its uppercase hexadecimal representation and writes
 * it into the buffer using print_str. Updates the total printed character
 * counter accordingly.
 *
 * Return: Updated printed character count.
 */
int print_hex_capital(int num, int printed_counter, Buffer* buff)
{
    char* hex_str = int_to_hex_capital(num);
    printed_counter = print_str(hex_str, printed_counter, buff);
    return printed_counter;
}

/**
 * print_octal - Prints an integer as an octal string.
 * @num: The integer to convert and print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Converts @num into its octal representation and writes it into the
 * buffer using print_str. Updates the total printed character counter.
 *
 * Return: Updated printed character count.
 */
int print_octal(int num, int printed_counter, Buffer* buff)
{
    char* octal_str = int_to_octal(num);
    printed_counter = print_str(octal_str, printed_counter, buff);
    return printed_counter;
}

/**
 * print_binary - Prints an integer as a binary string.
 * @num: The integer to convert and print.
 * @printed_counter: Current count of already printed characters.
 * @buff: Pointer to the Buffer structure for output.
 *
 * Description:
 * Converts @num into its binary representation and writes it into the
 * buffer using print_str. Updates the total printed character counter.
 *
 * Return: Updated printed character count.
 */
int print_binary(int num, int printed_counter, Buffer* buff)
{
    char* binary_str = int_to_binary(num);
    printed_counter = print_str(binary_str, printed_counter, buff);
    return printed_counter;
}