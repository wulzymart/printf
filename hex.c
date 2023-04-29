#include "main.h"
/**
 * printxw - prints hex with specified width
 * @n: number string
 * @width: width
 * Return: number of charters printed
*/

int printxw(char *n, int width)
{
	int l, count = 0, j;

	l = _strlen(n);
	if (l < width)
		for (j = 0; j < (width - l); j++)
			count += _putchar(' ');
	count += prints(n);
	free(n);
	return (count);
}

/**
 * print_hex - prints undigned int from va_list in lowercase hex
 * @args: va_list arguement
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of items printed
 */

int print_hex(va_list args, flags flags, char mod, int width)
{
	unsigned int n, count = 0;
	unsigned short  m;
	unsigned long o;
	char *s;

	if (!mod)
	{
		n = va_arg(args, unsigned int);

		s = sprint_x(n, flags);
		count += printxw(s, width);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		s = sprint_x(o, flags);

		count += printxw(s, width);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		s = sprint_x((short)m, flags);

		count += printxw(s, width);
	}
	return (count);
}

/**
 * print_HEX - prints undigned int from va_list in uppercase hex
 * @args: va_list arguement
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of items printed
 */

int print_HEX(va_list args, flags flags, char mod, int width)
{
	unsigned int n, count = 0;
	unsigned short  m;
	unsigned long o;
	char *s;

	if (!mod)
	{
		n = va_arg(args, unsigned int);

		s = sprint_X(n, flags);
		count += printxw(s, width);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		s = sprint_X(o, flags);

		count += printxw(s, width);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		s = sprint_X((short)m, flags);
		count += printxw(s, width);
	}
	return (count);
}
