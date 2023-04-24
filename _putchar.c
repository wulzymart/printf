#include "main.h"

/**
 * _putchar - a function that outputs a character to stdout
 * @c: character to print
 * Return: it returns 1
 */

int _putchar(char c)
{
	static int i;
	static char buff[1024];

	if (i >= 1024 || c  == -1)
	{
		write(1, buff, i);
		i = 0;
	}
	if (i != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}
