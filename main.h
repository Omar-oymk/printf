#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int _putchar(char c);
int _strlen(char* str);
int print_char(char c, int printed_counter);
int print_int(int num, int printed_counter);
int _printf(const char *format, ...);

#endif
