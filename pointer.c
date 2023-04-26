#include "main.h"
/**
 * printptr - prints addresses to screen
 * @n: address of pointer in integer value
 * Return: number of elements printed
 */

int printptr(unsigned long n)
{
	unsigned int count = 0;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
			'b', 'c', 'd', 'e', 'f'};
	if (n < 16)
	{
		count += _putchar(hex[n]);
	}
	else
	if (n / 16 < 16)
	{
		count += _putchar(hex[n / 16]);
		count += _putchar(hex[n % 16]);
	}
	else
	{
		count += printptr(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}
/**
 * print_ptr - prints pointer from valist to screen
 * @args: va_list args
 * @flags: flag
 * Return: number of elements printed
 */

int print_ptr(va_list args, flags flags)
{
	unsigned long n = va_arg(args, unsigned long);
	int count = 0;

	if (!n)
		count += prints("(nil)");
	else
	{
		if (flags.space && !flags.plus)
			count += _putchar(' ');
		if (flags.plus)
			count += _putchar('+');
		count += _putchar('0');
		count += _putchar('x');
		count += printptr(n);
	}
	return (count);
}
