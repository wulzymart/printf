#include "main.h"

/**
 * _putchar - a function that outputs a character to stdout
 * @c: character to print
 * Return: it returns 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}