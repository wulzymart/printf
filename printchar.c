#include "main.h"
/**
 * print_char - prints a character from va_list
 * @args: va_list pointer
 * @flags: flag
 * Return: number of characters printed
 */

int print_char(va_list args, flags flags)
{
	char c = va_arg(args, int);

	(void)flags;
	return (_putchar(c));
}
