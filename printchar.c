#include "main.h"
/**
 * print_char - prints a character from va_list
 * @args: va_list pointer
 * @flags: flag
 * @mod: modifier
 * Return: number of characters printed
 */

int print_char(va_list args, flags flags, char mod)
{
	char c = va_arg(args, int);

	(void)flags;
	(void)mod;
	return (_putchar(c));
}
