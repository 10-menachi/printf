#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char s[20];

	sprintf(s, "%o", n);
	write(1, s, strlen(s));
	return (strlen(s));
}
