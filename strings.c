#include "main.h"
/**
 * print_string - print a string from args list
 * @args: valist arguement to print from
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of characters printed
 */

int print_string(va_list args, flags flags, char mod, int width)
{
	char *s = va_arg(args, char *);

	(void)flags;
	(void)mod;
	if (s == NULL)
		s = "(null)";
	if (*s == '\0')
		return (0);
	return (printsw(s, width));
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
		c += _putchar(*s);
		s++;
	}
	return (c);
}


/**
 * print_unknown - prints unknown specifier
 * @flg: flags
 * @c: specifier
 * Return: number of charters printed
 */

int print_unknown(flags flg, char c)
{
	int count = 0;

	count += _putchar('%');
	if (flg.hash)
		count += _putchar('#');
	if (flg.plus)
		count += _putchar('+');
	if (flg.space && !flg.plus)
		count += _putchar(' ');
	count += _putchar(c);
	return (count);
}
