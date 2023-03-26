#include "main.h"

/**
 * _printf - printf clone
 * @format: format specifier
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				fputs(s, stdout);
				count += strlen(s);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int num = va_arg(args, int);
				char str[20];

				sprintf(str, "%d", num);
				fputs(str, stdout);
				count += strlen(str);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				fprintf(stderr, "Invalid conversion specifier: %%%c\n", format[i]);
				va_end(args);
				return (-1);
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
