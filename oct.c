#include "main.h"

/**
 * printo - function that prints an octal value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printo(unsigned long n)
{
	unsigned int count = 0;
	char *s = num2str(n, 8);

	count += prints(s);
	free(s);
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
		count += printo(o);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		if (m > 0 && flags.hash)
			count += _putchar('0');
		count += printo((short)m);
	}
	return (count);
}
