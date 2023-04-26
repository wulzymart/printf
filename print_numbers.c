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
 * print_short - print any given short intr to screen
 * @n: number to print
 * Return: the numer of digits printed
 */

int print_short(unsigned short n)
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
			count += print_short(n / 10);
			count += _putchar(n % 10 + 48);
		}
	return (count);
}
/**
 * print_long - print any given long integer to screen
 * @n: number to print
 * Return: the numer of digits printed
 */
int print_long(unsigned long n)
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
			count += print_long(n / 10);
			count += _putchar(n % 10 + 48);
		}
	return (count);
}
/**
 * printflag - prints flags
 * @flags: flags
 * Return: number of charcters printed
 */
int printflag(flags flags)
{
	int count = 0;

	if (flags.plus)
		count += _putchar('+');
	if (flags.space && !flags.plus)
		count += _putchar(' ');
	return (count);
}
