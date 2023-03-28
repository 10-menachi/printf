#include "main.h"

/**
* print_binary - prints a binary number.
* @args: arguments.
* Return: 1.
*/
int print_binary(va_list args)
{
	int num = va_arg(args, int);
	int negative = 0;
	int binary[32];
	int j, i = 0;
	char c;

	if (num < 0)
	{
	negative = 1;
	num = ~num + 1;
	}

	do {
	binary[i++] = num % 2;
	num /= 2;
	} while (num > 0);

	if (negative)
	{
	binary[i++] = 1;
	}

	for (j = i - 1; j >= 0; j--)
	{
	c = binary[j] + '0';
	write(1, &c, 1);
	}

	return (i);
}
