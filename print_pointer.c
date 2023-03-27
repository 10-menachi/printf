#include "main.h"

/**
 * print_pointer - prints pointers
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_pointer(va_list args)
{
	void *p = va_arg(args, void *);
	char buff[20];

	sprintf(buff, "%p", ptr);
	write(1, buff, strlen(buff));
	return (strlen(buff));
}
