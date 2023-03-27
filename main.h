#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(int ch);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_argument(char specifier, va_list args);
int print_binary(va_list args);
int print_pointer(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);

#endif
