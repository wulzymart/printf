#include "main.h"

/**
 * _putchar - a function that outputs a character to stdout
 * @c: character to print
 * Return: it returns 1
 */

int _putchar(char c)
{
	char buff[1024];

	buff[0] = c;
	return (write(1, buff, 1));
}
