#include "main.h"
static char flag;
static unsigned int i, count;
static int value, checker, (*f)(va_list, char);
/**
 * getflag - checks if character is a flag or specifier and sets
 * the value of flag;
 * @fmt: string
 * @i: address of string index
 * Return: 1 flag found and specifier is good , returns 0 if neither
 * -1 if flag and nextchar is null or not specifier
 */
int getflag(const char *fmt, unsigned int *i)
{
	char f[] = "+ #", s[] = "diucsSpoxX";
	int j, k, d = *i;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == fmt[d])
		{
			flag = 0;
			return (1);
		}
	}
	for (j = 0; f[j]; j++)
	{
		if (f[j] == fmt[d])
		{
			d++;
			if (fmt[d] == 0)
				return (-1);
			for (k = 0; s[k]; k++)
			{
				if (s[k] == fmt[d])
				{
					flag = f[j];
					*i = d;
					return (1);
				}
			}
			return (-1);
		}
	}
	return (0);
}
/**
 * _printf - prints a formated text with arguements passed
 * @format: formated string - formatting is optional
 * Return: Number of characters printed to screen
 */

int _printf(const char *format, ...)
{
	va_list args;

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
			if (format[i] == '%')
			{
				count += _putchar('%');
				continue;
			}
			checker = getflag(format, &i);
			if (checker == 0)
			{
				_putchar('%');
				_putchar(format[i]);
			}
			if (checker == -1)
				return (-1);
			if (checker == 1)
			{
				f = spec_func(format[i]);
				value = f(args, flag);
				if (value < -1)
					return (-1);
				count += value;
			}
		}
	}
	va_end(args);
	return (count);
}
