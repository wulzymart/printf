#include "main.h"
/**
 * print0x - prints # flag for hex
 * Return: 2
 */
int print0x(void)
{
	unsigned int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	return (count);
}
/**
 * print0X - prints # flag for hex in capital
 * Return: 2
 */
int print0X(void)
{
	unsigned int count = 0;

	count += _putchar('0');
	count += _putchar('X');
	return (count);
}
