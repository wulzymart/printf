#include "main.h"

/**
 * _printf - prints a formated text with arguements passed
 * @format: formated string - formatting is optional
 * Return: Number of characters printed to screen
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;

	for (; format[i] != 0; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
	}
	return (count);
}
