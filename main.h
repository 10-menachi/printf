#ifndef MAIN_H
#define MAIN_H

#include "stdio.h"
#include "unistd.h"
#include "stdarg.h"

/**
 * struct print - struct for print functions
 * @type_arg: identifier
 * @f: pointer to printer functions
 *
 * Description: stores pointers to print functions
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int)
} print_t;

int _putchar(int ch);
int _printf(const char *format, ...);
int print_buf(char *buf, unsigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char*, unsigned int);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);


#endif
