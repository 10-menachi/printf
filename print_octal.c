#include "main.h"

/**
 * print_octal - prints octal numbers
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char s[20];

	sprintf(s, "%o", n);
	write(1, s, strlen(s));
	return (strlen(s));
}
