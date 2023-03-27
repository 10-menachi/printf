#include "main.h"

/**
 * print_binary - prints an integer in binary form
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
	int num = va_arg(args, int);
	int binary[32];
	int j, i = 0;
	char c;

	do {
		binary[i++] = num % 2;
		num /= 2;
	} while (num > 0);

	for (j = i - 1; j >= 0; j--)
	{
		c = binary[j] + '0';
		write(1, &c, 1);
	}
	return (i);
}
