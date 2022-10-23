#ifndef MAIN_H
#define MAIN_H

#include "stdlib.h"
#include "stdarg.h"
#include "unistd.h"

#define BUFF_SIZE 1024

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int handle_print(const char *format, int *i,
		va_list list, char buffer[], int flags, int width, int precision, int size);
#endif
