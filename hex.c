#include "main.h"
/**
 * printx - function that prints lowercase hex value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printx(unsigned long n)
{
	unsigned int count = 0;
	char *s = num2str(n, 16);

	count += prints(s);
	free(s);
	return (count);
}

/**
 * print_hex - prints undigned int from va_list in lowercase hex
 * @args: va_list arguement
 * @flags: flag
 * @mod: modifier
 * Return: number of items printed
 */

int print_hex(va_list args, flags flags, char mod)
{
	unsigned int n, count = 0;
	unsigned short  m;
	unsigned long o;

	if (!mod)
	{
		n = va_arg(args, unsigned int);
		if (n > 0 && flags.hash)
		{
			count += print0x();
		}
		count += printx(n);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		if (o > 0 && flags.hash)
		{
			count += print0x();
		}
		count += printx(o);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		if (m > 0 && flags.hash)
		{
			count += print0x();
		}
		count += printx((short)m);
	}
	return (count);
}

/**
 * printX - function that prints a capital hex value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printX(unsigned long n)
{
	unsigned int count = 0;
	char *s = num2STR(n, 16);

	count += prints(s);
	free(s);
	return (count);
}

/**
 * print_HEX - prints undigned int from va_list in uppercase hex
 * @args: va_list arguement
 * @flags: flag
 * @mod: modifier
 * Return: number of items printed
 */

int print_HEX(va_list args, flags flags, char mod)
{
	unsigned int n, count = 0;
	unsigned short  m;
	unsigned long o;

	if (!mod)
	{
		n = va_arg(args, unsigned int);
		if (n > 0 && flags.hash)
		{
			count += print0X();
		}
		count += printX(n);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		if (o > 0 && flags.hash)
		{
			count += print0X();
		}
		count += printX(o);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		if (m > 0 && flags.hash)
		{
			count += print0X();
		}
		count += printX((short)m);
	}
	return (count);
}
