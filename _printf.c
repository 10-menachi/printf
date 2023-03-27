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
			count += print_argument(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}

/**
 * print_argument - prints the argument according to the format specifier
 * @specifier: format specifier
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_argument(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		case 'd':
		case 'i':
			return (print_int(args));
		case '%':
			write(1, "%", 1);
			return (1);
		case 'b':
			return (print_binary(args));
		default:
			fprintf(stderr, "Invalid conversion specifier: %%%c\n", specifier);
			return (0);
	}
}

/**
 * print_char - prints a character
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a string
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	write(1, s, strlen(s));
	return (strlen(s));
}

/**
 * print_int - prints an integer
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	char str[20];

	sprintf(str, "%d", num);
	write(1, str, strlen(str));
	return (strlen(str));
}
