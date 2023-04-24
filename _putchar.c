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

	if (i >= 1024 || c  < 0 || c = 127)
	{
		write(1, buff, i);
		i = 0;
	}
	else
	{
		buff[i] = c;
		write(1, &buff[i], 1);
		i++;
	}
	return (1);
}
