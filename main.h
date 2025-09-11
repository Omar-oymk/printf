#ifndef MAIN_H
#define MAIN_H

/* ===================== */
/*       LIBRARIES       */
/* ===================== */
#include <stdio.h>     /* For standard input/output functions */
#include <stdarg.h>    /* For handling variable argument lists (va_list) */
#include <unistd.h>    /* For write() system call (used in _putchar) */
#include <stdlib.h>    /* For malloc, free, and general utilities */
#include <limits.h>    /* For limits like INT_MAX, etc. */

/* ===================== */
/*       CONSTANTS       */
/* ===================== */
#define BUFFER_SIZE 1024   /* Size of the buffer used to store characters before flushing */

/* ===================== */
/*     DATA STRUCTURE    */
/* ===================== */
/* Buffer structure:
 * - Holds characters temporarily before writing to output
 * - Helps optimize performance by reducing write() calls
 */
typedef struct {
    char buffer[BUFFER_SIZE]; /* Character storage */
    int index;                /* Current position in buffer */
} Buffer;

/* ===================== */
/*  BASIC UTIL FUNCTIONS */
/* ===================== */
int _putchar(char c);       /* Writes a single character */
int _strlen(char* str);     /* Returns length of a string */
void _revstr(char* str);    /* Reverses a string in place */

/* ===================== */
/*    BUFFER HANDLING    */
/* ===================== */
void flush_buffer(Buffer* buff);            /* Flushes buffer contents to stdout */
void add_to_buffer(Buffer* buff, char* str);/* Adds a string to the buffer */
void add_to_buffer_char(Buffer* buff, char c); /* Adds a single character to the buffer */

/* ===================== */
/*   CONVERSION UTILS    */
/* ===================== */
char* int_to_hex(unsigned int num);         /* Converts unsigned int to lowercase hex string */
char* int_to_hex_capital(unsigned int num); /* Converts unsigned int to uppercase hex string */
char* int_to_octal(unsigned int num);       /* Converts unsigned int to octal string */
char* int_to_binary(unsigned int num);      /* Converts unsigned int to binary string */

/* ===================== */
/*   PRINTING FUNCTIONS  */
/* ===================== */
int print_char(char c, int printed_counter, Buffer* buff);              /* Prints a character */
int print_str(char* str, int printed_counter, Buffer* buff);            /* Prints a string */
int print_int(int num, int printed_counter, Buffer* buff);              /* Prints a signed integer */
int print_unsigned_int(unsigned int num, int printed_counter, Buffer* buff); /* Prints an unsigned integer */
int print_hex_small(int num, int printed_counter, Buffer* buff);        /* Prints number in lowercase hex */
int print_hex_capital(int num, int printed_counter, Buffer* buff);      /* Prints number in uppercase hex */
int print_octal(int num, int printed_counter, Buffer* buff);            /* Prints number in octal */
int print_binary(int num, int printed_counter, Buffer* buff);           /* Prints number in binary */

/* ===================== */
/*     MAIN FUNCTION     */
/* ===================== */
int _printf(const char *format, ...); /* Custom printf implementation */

#endif /* MAIN_H */
