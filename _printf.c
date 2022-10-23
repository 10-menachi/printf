#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format specifier
 *
 * Return: length of formatted output
 */

int _printf(const char *format, ...)
{
	int (*p2func)(va_list, flags_t *);
	const char *p;
	va_list args;
	flags_t flags = {0, 0, 0};
	register int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	p = format;
	while (*p)
	{
		if (*p == '%')
		{
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			p2func = get_print(*p);
			count += (p2func)
				? p2func(args, &flags)
				: _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
		p++;
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
