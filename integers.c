#include "main.h"
/**
 * print_num - print any given number to screen
 * @n: number to print
 * Return: the numer of digidt printed
 */

int print_num(unsigned int n)
{
	unsigned int count = 0;

	if (n < 10)
		count += _putchar(n + 48);
	else
		if (n / 10 < 10)
		{
			count += _putchar(n / 10 + 48);
			count += _putchar(n % 10 + 48);
		}
		else
		{
			count += print_num(n / 10);
			count += _putchar(n % 10 + 48);
		}
	return (count);
}

/**
 * print_int - prints a signed int
 * @args: va_list arguement pointer
 * @flags: flag
 * Return: number of printed digits
 */

int print_int(va_list args, flags flags)
{
	int n;
	unsigned int count = 0;

	n = va_arg(args, int);
	if (n < 0)
	{
		count += _putchar('-');
		n = 0 - n;
	}
	else
	{
		if (flags.plus)
			count += _putchar('+');
		if (flags.space && !flags.plus)
			count += _putchar(' ');
	}
	count += print_num(n);
	return (count);
}
/**
 * print_unsigned - prints a signed int
 * @args: va_list arguement pointer
 * @flags: flag
 * Return: number of printed digits
 */
int print_unsigned(va_list args, flags flags)
{
	unsigned int n = va_arg(args, unsigned int);

	(void)flags;
	return (print_num(n));
}
