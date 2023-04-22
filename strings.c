#include "main.h"

/**
 * print_string - prints any given string
 * @s: string to be printed
 * Return: number of charcters printed
 */

int print_string(char *s)
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
