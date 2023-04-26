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
 * printso - function that prints an octal value of shorts
 * @n: unsigned short to convert
 * Return: returns the amount of elements printed
 */
int printso(unsigned short n)
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
		count += printso(n / 8);
		count += _putchar(n % 8 + 48);
	}
	return (count);
}
/**
 * printlo - function that prints an octal value of a long
 * @n: unsigned long to convert
 * Return: returns the amount of elements printed
 */
int printlo(unsigned long n)
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
		count += printlo(n / 8);
		count += _putchar(n % 8 + 48);
	}
	return (count);
}
/**
 * print_oct - prints unsigned int from va_list in octal
 * @args: va_list arguement
 * @flags: flag
 * @mod: modifier
 * Return: number of items printed
 */

int print_oct(va_list args, flags flags, char mod)
{
	unsigned int n, count = 0;
	unsigned short  m;
	unsigned long o;

	if (!mod)
	{
		n = va_arg(args, unsigned int);
		if (n > 0 && flags.hash)
			count += _putchar('0');
		count += printo(n);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		if (o > 0 && flags.hash)
			count += _putchar('0');
		count += printlo(o);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		if (m > 0 && flags.hash)
			count += _putchar('0');
		count += printso((short)m);
	}
	return (count);
}
