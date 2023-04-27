#include "main.h"
/**
 * print_num - print any given number to screen
 * @n: number to print
 * Return: the numer of digidt printed
 */

int print_num(unsigned long n)
{
	unsigned int count = 0;
	char *s = num2str(n, 10);

	count += prints(s);
	free(s);
	return (count);
}

/**
 * printflag - prints flags
 * @flags: flags
 * Return: number of charcters printed
 */
int printflag(flags flags)
{
	int count = 0;

	if (flags.plus)
		count += _putchar('+');
	if (flags.space && !flags.plus)
		count += _putchar(' ');
	return (count);
}
