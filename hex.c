#include "main.h"

/**
 * printx - function that prints lowercase hex value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printx(unsigned int n)
{
	unsigned int count = 0;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
			'b', 'c', 'd', 'e', 'f'};

	if (n < 16)
	{
		count += _putchar(hex[n]);
	}
	else
	if (n / 16 < 16)
	{
		count += _putchar(hex[n / 16]);
		count += _putchar(hex[n % 16]);
	}
	else
	{
		count += printx(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}

/**
 * print_hex - prints undigned int from va_list in lowercase hex
 *@args: va_list arguement
 * Return: number of items printed
 */

int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (printx(n));
}

/**
 * printX - function that prints a capital hex value
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printX(unsigned int n)
{
	unsigned int count = 0;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
			'B', 'C', 'D', 'E', 'F'};

	if (n < 16)
	{
		count += _putchar(hex[n]);
	}
	else
	if (n / 16 < 16)
	{
		count += _putchar(hex[n / 16]);
		count += _putchar(hex[n % 16]);
	}
	else
	{
		count += printX(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}

/**
 * print_HEX - prints undigned int from va_list in uppercase hex
 *@args: va_list arguement
 * Return: number of items printed
 */

int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (printX(n));
}