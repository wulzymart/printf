#include "main.h"
/**
 * print_char - prints a character from va_list
 * @args: va_list pointer
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (c)
		return (_putchar(c));
	return (0);
}