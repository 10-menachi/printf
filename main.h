#ifndef MAIN_H
#define MAIN_H

#include "stdlib.h"
#include "stdarg.h"

/**
 * struct flags - contains flags for flag
 * specifiers
 *
 * @plus: flag for '+'
 * @space: flag for ' '
 * @hash: flag for '#'
 *
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

int _putchar(int ch);
int get_flag(char s, flags_t *f);
int (*get_print(char s))(va_list, flags_t *);


#endif
