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
	int i = 0;

	do {
		binary[i++] = num % 2;
		num /= 2;
	} while (num > 0);

	for (int j = i - 1; j >= 0; j--)
		putchar(binary[j] + '0');
	return (i);
}
