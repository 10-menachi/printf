#include "main.h"

/**
 * print_hex - prints hexadecimal numbers
 * @args: arguments list
 * @is_uppercase: flag indicating if letters should
 * be uppercase or not
 *
 * Return: number of characters printed
 */

int print_hex(va_list args, int is_uppercase)
{
	int n = va_arg(args, int);
	char hex[] = "0123456789abcdef";
	char *s = NULL;
	int i, j, d;
	char c;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	s = (char *)malloc(sizeof(char) * 32);
	if (s == NULL)
	{
		return (0);
	}
	i = 0;
	while (n > 0)
	{
		d = n % 16;
		s[i++] = hex[d];
		n /= 16;
	}
	s[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		c = s[j];
		if (is_uppercase)
			c = toupper(c);
		write(1, &c, 1);
	}
	free(s);
	return (i);
}

