#include "main.h"

/**
 * printb - function that prints a binary value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printb(unsigned long n)
{
	unsigned int count = 0;
	char *s = num2str(n, 2);

	count += prints(s);
	free(s);
	return (count);
}

/**
 * print_bin - prints undigned int from va_list in binary
 * @args: va_list arguement
 * @flags: flags
 * @mod: modifier
 * @width: width
 * Return: number of items printed
 */

int print_bin(va_list args, flags flags, char mod, int width)
{
	unsigned int n = va_arg(args, unsigned int);

	(void)flags;
	(void)mod;
	(void)width;
	return (printb(n));
}
