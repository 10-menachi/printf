#include "main.h"

/**
 * print_octal - prints octal numbers
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);
	char s[30];

	if (n > ULLONG_MAX)
	{
		return (-1);
	}

	sprintf(s, "%lo", n);
	write(1, s, strlen(s));
	return (strlen(s));
}
