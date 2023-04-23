#include "main.h"

/**
 * _printf - prints a formated text with arguements passed
 * @format: formated string - formatting is optional
 * Return: Number of characters printed to screen
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	int value;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (; format[i] != 0; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == 0)
				return (-1);
			f = spec_func(format[i]);
			if (f == NULL)
				return (-1);
			value = f(args);
			if (value < 0)
				return (-1);
			count += value;
		}
	}
	va_end(args);
	return (count);
}
