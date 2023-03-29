#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include <stdint.h>
#include <inttypes.h>

#define BUFF_SIZE 1024

/* flags */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_argument(char specifier, va_list args);
int print_reverse(va_list args);
int get_flags(const char *format, int *i);
int print_binary(va_list args);
int printrot13string(va_list args);
int print_pointer(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
unsigned long int print_lu(va_list args);
unsigned short int print_hu(va_list args);
int printf_String(va_list args);
int print_hex(va_list args, int is_uppercase);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
#endif
