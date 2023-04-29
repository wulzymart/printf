#include "main.h"
/**
 * sprint_ptr - prints a pointer with flags to string
 * @n: number
 * @flags: flags
 * Return: number in string
 */
char *sprint_ptr(long n, flags flags)
{
	char *s, *num;
	int l, m, o;

	(void)flags;
	s = num2str(n, 16);
	if (!s)
		return (NULL);
	l = _strlen(s) + 2;
	num = malloc(sizeof(char) * (l + 1));
	if (!num)
	{
		free(s);
		return (NULL);
	}
	num[l] = '\0';
	m = 0;
	num[m++] = '0';
	num[m++] = 'x';
	for (o = 0; m < l && s[o] ; o++)
	{
		num[m++] = s[o];
	}
	free(s);
	return (num);
}
/**
 * printpw - prints pointer with specified width
 * @n: number string
 * @width: width
 * Return: number of characters printed
*/

int printpw(char *n, int width)
{
	int l, count = 0, j;

	l = _strlen(n);
	if (l < width)
		for (j = 0; j < (width - l); j++)
			count += _putchar(' ');
	count += prints(n);
	free(n);
	return (count);
}
/**
 * print_ptr - prints pointer from valist to screen
 * @args: va_list args
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of elements printed
 */

int print_ptr(va_list args, flags flags, char mod, int width)
{
	unsigned long n = va_arg(args, unsigned long);
	int count = 0;
	char *s;

	(void)mod;
	if (!n)
		s = "(nil)";
	else
		s = sprint_ptr(n, flags);
	count += printpw(s, width);
	return (count);
}
