#include "main.h"

/**
 * printo - function that prints an octal value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printo(unsigned int n)
{
	unsigned int count = 0;

	if (n < 8)
	{
		count += _putchar(n + 48);
	}
	else
	if (n / 8 < 8)
	{
		count += _putchar(n / 8 + 48);
		count += _putchar(n % 8 + 48);
	}
	else
	{
		count += printo(n / 8);
		count += _putchar(n % 8 + 48);
	}
	return (count);
}

/**
 * print_oct - prints unsigned int from va_list in octal
 * @args: va_list arguement
 * @flags: flag
 * Return: number of items printed
 */

int print_oct(va_list args, flags flags)
{
	unsigned int n = va_arg(args, unsigned int), count = 0;

	if (n > 0 && flags.hash)
		count += _putchar('0');
	count += printo(n);
	return (count);
}
