#include "main.h"
static unsigned int i, count;
static int value, checker, (*f)(va_list, flags);
/**
 * isflag - checks if a character is a flag
 * @c: char to check
 * Return: 1 if is flag 0 if not
 */

int isflag(char c)
{
	int j;
	char f[] = "+ #";

	for (j = 0; f[j]; j++)
	{
		if (c == f[j])
			return (1);
	}
	return (0);
}
/**
 * isspec - checks if a character is a specifier
 * @c: char to check
 * Return: 1 if is flag 0 if not
 */

int isspec(char c)
{
	int j;
	char s[] = "diucsSpoxX";

	for (j = 0; s[j]; j++)
	{
		if (c == s[j])
			return (1);
	}
	return (0);
}

/**
 * getflag - checks if character is a flag or specifier and sets
 * the value of flag;
 * @fmt: string
 * @i: address of string index
:* @flg: flag pointer
 * Return: 1 flag found and specifier is good , returns 0 if neither
 * -1 if flag and nextchar is null or not specifier
 */
int getflag(const char *fmt, unsigned int *i, flags *flg)
{
	int d = *i;

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
	if (!isspec(fmt[d]) && fmt[d])
		return (0);
	if (isspec(fmt[d]))
		return (1);
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
			checker = getflag(format, &i, &flg);
			if (checker == 0)
				count += print_unknown(flg, format[i]);
			if (checker == -1)
				return (-1);
			if (checker == 1)
			{
				f = spec_func(format[i]);
				value = f(args, flg);
				if (value < -1)
					return (-1);
				count += value;
			}
		}
	}
	va_end(args);
	return (count);
}
