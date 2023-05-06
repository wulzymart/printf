#include "main.h"

/**
 * _putchar - a function that outputs a character to stdout
 * @c: character to print
 * Return: it returns 1
 */

int _putchar(char c)
{
	static char buff[1024];
	static int j;

	if (c == -1 || j >= 1024)
	{
		write(1, buff, j);
		j = 0;
	}
	else
	{
		buff[j] = c;
		j++;
	}
	return (1);
}
/**
 * _strlen - gets length of string
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
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
 * printsw - handles printing strings with specified width
 * @n: number string
 * @width: width
 * Return: number of charters printed
*/

int printsw(char *n, int width)
{
	int l, count = 0, j;

	l = _strlen(n);
	if (l < width)
		for (j = 0; j < (width - l); j++)
			count += _putchar(' ');
	count += prints(n);
	return (count);
}
