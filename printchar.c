#include "main.h"
/**
 * print_char - prints a character from va_list
 * @args: va_list pointer
 * @flag: flag
 * Return: number of characters printed
 */

int print_char(va_list args, char flag)
{
	char c = va_arg(args, int);

	(void)flag;
	return (_putchar(c));
}
