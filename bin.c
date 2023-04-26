#include "main.h"

/**
 * printb - function that prints a binary value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printb(unsigned int n)
{
	unsigned int count = 0;

	if (n < 2)
	{
		count += _putchar(n + 48);
	}
	else
	if (n / 2 < 2)
	{
		count += _putchar(n / 2 + 48);
		count += _putchar(n % 2 + 48);
	}
	else
	{
		count += printb(n / 2);
		count += _putchar(n % 2 + 48);
	}
	return (count);
}

/**
 * print_bin - prints undigned int from va_list in binary
 * @args: va_list arguement
 * @flags: flags
 * @mod: modifier
 * Return: number of items printed
 */

int print_bin(va_list args, flags flags, char mod)
{
	unsigned int n = va_arg(args, unsigned int);

	(void)flags;
	(void)mod;
	return (printb(n));
}
