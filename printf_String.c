#include "main.h"
#include <stdio.h>
/**
 * print_String - print  strings with special characters.
 * @args: argument.
 * Return: the length of the string.
 */

int print_String(va_list args)
{
	char *s;
	int i,count = 0;
	int cast;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			putchar('\\');
			putchar('x');
			count = count + 2;
			cast = s[i];
			if (cast < 16)
			{
				putchar('0');
				count++;
			}
			count = count + print_HEX(cast);
		}
		else
		{
			putchar(s[i]);
			count++;
		}
	}
	return (count);
}
