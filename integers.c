#include "main.h"
#include <stdio.h>
/**
 * print_int - prints a signed int
 * @args: va_list arguement pointer
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of printed digits
 */

int print_int(va_list args, flags flags, char mod, int width)
{
	int n;
	short m;
	long o;
	unsigned int count = 0;
	char *s;

	if (!mod)
	{
		n = va_arg(args, int);
		s = sprint_snum(n, flags);
		count += printnw(s, width);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		s =  sprint_snum(o, flags);
		count += printnw(s, width);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		s = sprint_snum((short)m, flags);
		count += printnw(s, width);
	}
	return (count);
}
/**
 * print_unsigned - prints a signed int
 * @args: va_list arguement pointer
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of printed digits
 */
int print_unsigned(va_list args, flags flags, char mod, int width)
{
	unsigned int n;
	unsigned short  m;
	unsigned long o;
	unsigned int count = 0;
	char *s;

	(void)flags;
	if (!mod)
	{
		n = va_arg(args, int);
		s = sprint_num(n);
		count += printnw(s, width);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		s = sprint_num(o);
		count += printnw(s, width);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		s = sprint_num((short)m);
		count += printnw(s, width);
	}
	return (count);

}
