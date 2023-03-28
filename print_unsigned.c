#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_unsigned_int(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char s[20];

	sprintf(s, "%u", n);
	write(1, s, strlen(s));
	return (strlen(s));
}
