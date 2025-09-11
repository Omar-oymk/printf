#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>


int _putchar(char c);
int _strlen(char* str);
void _revstr(char* str);

char* int_to_hex(unsigned int num);
char* int_to_octal(unsigned int num);

int print_char(char c, int printed_counter);
int print_str(char* str, int printed_counter);
int print_int(int num, int printed_counter);
int print_unsigned_int(unsigned int num, int printed_counter);
int print_hex_small(int num, int printed_counter);
int print_octal(int num, int printed_counter);

int _printf(const char *format, ...);

#endif
