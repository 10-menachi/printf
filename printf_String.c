#include "main.h"
/**
* printf_String - print string with special characters
* @args: argument.
* Return: the length of the string.
*/
int printf_String(va_list args)
{
	char *s;
	int i, len = 0;
	int cast;
	char hex[3];

	s = va_arg(args, char *);
		if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		{
		if (s[i] < 32 || s[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			len += 2;
			cast = s[i];
		if (cast < 16)
		{
			write(1, "0", 1);
			len++;
		}
		sprintf(hex, "%X", cast);
		write(1, hex, 2);
		len += 2;
		}
	else
	{
	write(1, &s[i], 1);
	len++;
	}
	}
	return (len);
}
