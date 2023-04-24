#include "main.h"

/*
 * print_bin - function that prints a binary value
 * @args: an argument list
 * Return: returns the amount of elements printed
 */
int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int count = 0;

	if (n < 2)
	{
		count += _putchar(n + 48);
	}
	else
	if ((n / 2) < 2)
	{
		count += _putchar(n + 48);
		count += _putchar((n % 2) + 48);
	}
	else
	{
		count += print_bin(n / 2);
		count += _putchar((n % 2) + 48);
	}
	return (count);
}
