#include "main.h"

/**
 * _printf - prints a formated text with arguements passed
 * @format: formated string - formatting is optional
 * Return: Number of characters printed to screen
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, ps;
	va_list args;

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
			switch (format[i])
			{
			case '%':
				count += _putchar('%');
				break;
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				ps += print_string(va_arg(args, char *));
				if (ps < 0)
					return (-1);
				count += ps;
				break;
			}
		}
	}
	va_end(args);
	return (count);
}
