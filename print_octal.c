#include "main.h"

/**
 * print_octal - prints octal numbers
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
	uintmax_t n = va_arg(args, uintmax_t);
	char s[25];

	sprintf(s, "%" PRIoMAX, n);
	write(1, s, strlen(s));
	return (strlen(s));
}
