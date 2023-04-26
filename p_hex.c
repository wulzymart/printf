#include "main.h"

/**
 * printsx - function that prints lowercase hex value of shorts
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printsx(unsigned short n)
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
		count += printsx(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}
/**
 * printsX - function that prints a capital hex value of shorts
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printsX(unsigned short n)
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
		count += printsX(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}

/**
 * printlx - function that prints lowercase hex value of long
 * @n: unsigned long to convert
 * Return: returns the amount of elements printed
 */
int printlx(unsigned long n)
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
		count += printlx(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}
/**
 * printlX - function that prints a capital hex value of longs
 * @n: unsigned int to convert
 * Return: returns the amount of elements printed
 */
int printlX(unsigned long n)
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
		count += printlX(n / 16);
		count += _putchar(hex[n % 16]);
	}
	return (count);
}
