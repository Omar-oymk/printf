#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define BUFFER_SIZE 1024

typedef struct {
    char buffer[BUFFER_SIZE];
    int index;
} Buffer;

int _putchar(char c);
int _strlen(char* str);
void _revstr(char* str);

char* int_to_hex(unsigned int num);
char* int_to_hex_capital(unsigned int num);
char* int_to_octal(unsigned int num);
char* int_to_binary(unsigned int num);

int print_char(char c, int printed_counter, char* buff);
int print_str(char* str, int printed_counter, char* buff);
int print_int(int num, int printed_counter, char* buff);
int print_unsigned_int(unsigned int num, int printed_counter, char* buff);
int print_hex_small(int num, int printed_counter, char* buff);
int print_hex_capital(int num, int printed_counter, char* buff);
int print_octal(int num, int printed_counter, char* buff);
int print_binary(int num, int printed_counter, char* buff);

int _printf(const char *format, ...);

#endif
