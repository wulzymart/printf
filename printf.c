#include "main.h"
#include <stdio.h>
static unsigned int count;
static char mod;
/**
 * getflags - sets flags of a spec in formated text
 * @fmt: formated string
 * @i: current index:
 * @flg: flags struct
*/
void getflags(const char *fmt, int *i, flags *flg)
{
	int d = *i;

flg->hash = 0;
flg->plus = 0;
flg->plus = 0;
	for (; isflag(fmt[d]); d++)
	{
		switch (fmt[d])
		{
		case '+':
			flg->plus = 1;
			break;
		case ' ':
			flg->space = 1;
			break;
		case '#':
			flg->hash = 1;
			break;
		}
	}
	*i = d;
}
/**
 * getwidth - sets flags of a spec in formated text
 * @fmt: formated string
 * @i: current index:
 * @args: arguements
 * Return: integer
*/
int getwidth(const char *fmt, int *i, va_list args)
{
	int d = *i, j = 0, n = 0;

	if (fmt[d] == '*')
	{
		d++;
		return (va_arg(args, int));
	}
	for (j = 0; _isdigit(fmt[d]); j++)
	{
		if (j == 0 && fmt[d] == '0')
			return (0);
		n = n * 10 + (fmt[d] - '0');
		d++;
	}
	*i = d;
	return (n);
}
/**
 * getparams - checks if character is a flag or specifier and sets
 * the value of flag;
 * @fmt: string
 * @i: address of string index
 * @flg: flag pointer
 * @mod: modifier
 * @w: width
 * @args: arguements
 * Return: 1 flag found and specifier is good , returns 0 if neither
 * -1 if flag and nextchar is null or not specifier
 */
int getparams(const char *fmt, int *i, flags *flg, char *mod, int *w,
va_list args)
{
	int d = *i, j = *i;

	*mod = 0;
	getflags(fmt, &d, flg);
	j = fmt[d] != '*' ? d : d + 1;
	*w = getwidth(fmt, &d, args);
	if (ismod(fmt[d]))
	{
		*mod = fmt[d];
		d++;
	}
	
	
	*i = d;

	if (isspec(fmt[d]))
		return (1);
	if (!isspec(fmt[d]) && fmt[d])
	{
		if (fmt[d] == '%')
			return (2);
		*i = j;
		return (0);
	}
	
	return (-1);
}
/**
 * _printf - prints a formated text with arguements passed
 * @format: formated string - formatting is optional
 * Return: Number of characters printed to screen
 */

int _printf(const char *format, ...)
{
	va_list args;
	flags flg = {0, 0, 0};
	int i, value, checker, (*f)(va_list, flags, char, int), width = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0, count = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			checker = getparams(format, &i, &flg, &mod, &width, args);
			if (checker == 2)
				count += _putchar('%');
			if (checker == 0)
				count += print_unknown(flg, format[i]);
			if (checker == -1)
				return (-1);
			if (checker == 1)
			{
				f = spec_func(format[i]);
				value = f(args, flg, mod, width);
				count += value;
			}
		}
	}
	va_end(args);
	return (count);
}
