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
 * @flag: flag
 * Return: number of characters printed
 */

int print_string(va_list args, char flag)
{
	char *s = va_arg(args, char *);

	(void)flag;
	if (s == NULL)
		s = "(null)";
	if (*s == '\0')
		return (-1);
	return (prints(s));
}

/**
 *printS - prints any given string but non printable characters are printed
 *as \x and hex value of character in uppercase
 *@s: string to be printed
 *Return: number of charcters printed
 */

int printS(char *s)
{
	unsigned int c = 0;

	if (s != NULL)
	while (*s)
	{
		if (*s < 32 || *s > 126)
		{
			c += _putchar('\\');
			c += _putchar('x');
			if (*s < 16)
				c += _putchar('0');
			c += printX(*s);
		}
		else
		c += _putchar(*s);
		s++;
	}
	return (c);
}

/**
 * print_S - print a string from args list
 * @args: valist arguement to print from
 * @flag: flag
 * Return: number of characters printed
 */
int print_S(va_list args, char flag)
{
	char *s = va_arg(args, char *);

	(void)flag;
	if (s == NULL)
		s = "(null)";
	if (*s == '\0')
		return (-1);
	return (printS(s));
}
