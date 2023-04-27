#include "main.h"
/**
 * print_snum - prints a signed number with flags
 * @n: number
 * @flags: flags
 * Return: number of items printed
 */
int print_snum(long n, flags flags)
{
	unsigned int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = 0 - n;
	}
	else
	{
		count += printflag(flags);
	}
	count += print_num(n);
	return (count);
}

/**
 * print_int - prints a signed int
 * @args: va_list arguement pointer
 * @flags: flag
 * @mod: modifier
 * Return: number of printed digits
 */

int print_int(va_list args, flags flags, char mod)
{
	int n;
	short  m;
	long o;
	unsigned int count = 0;

	if (!mod)
	{
		n = va_arg(args, int);
		count += print_snum(n, flags);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		count += print_snum(o, flags);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		count += print_snum((short)m, flags);
	}
	return (count);
}
/**
 * print_unsigned - prints a signed int
 * @args: va_list arguement pointer
 * @flags: flag
 * @mod: modifier
 * Return: number of printed digits
 */
int print_unsigned(va_list args, flags flags, char mod)
{
	unsigned int n;
	unsigned short  m;
	unsigned long o;
	unsigned int count = 0;

	(void)flags;
	if (!mod)
	{
		n = va_arg(args, int);
		count += print_num(n);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		count += print_num(o);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		count += print_num((short)m);
	}
	return (count);

}
