#include "main.h"
/**
 * print_char - prints a character from va_list
 * @args: va_list pointer
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of characters printed
 */

int print_char(va_list args, flags flags, char mod, int width)
{
	char c = va_arg(args, int);
	int count = 0, j;

	(void)flags;
	(void)mod;
	for (j = 0; j < width - 1; j++)
		count += _putchar(' ');
	count += _putchar(c);
	return (count);
}
