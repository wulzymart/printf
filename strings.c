#include "main.h"

/**
 * prints - prints any given string
 * @s: string to be printed
 * Return: number of charcters printed
 */

int prints(char *s)
{
	unsigned int c = 0;

	if (s != NULL)
	while (*s)
	{
		c += _putchar(*s);
		s++;
	}
	return (c);
}
/**
 * print_string - print a string from args list
 * @args: valist arguement to print from
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s)
		return (prints(s));
	return (-1);
}
