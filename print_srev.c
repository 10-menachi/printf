#include "main.h"
/**
 * print_reverse - Prints reverse string.
 * @args: arguments
 * Return: Numbers of chars printed
 */
int print_reverse(va_list args)
{
	char *str;
	int i, count = 0;
	str = va_arg(args, char *);

	if (str == NULL)
	{

		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		char z = str[i];

		write(1, &z, 1);
		count++;
	}
	return (count);
}
