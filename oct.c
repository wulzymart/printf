#include "main.h"

/**
 * sprint_o - prints a unsigned int in octal with flags
 * @n: number
 * @flags: flags
 * Return: number in string
 */
char *sprint_o(long n, flags flags)
{
	char *s, *num;
	int l, m, o = 0;

	s = num2str(n, 8);
	if (!s)
		return (NULL);
	l = _strlen(s);
	if (n && flags.hash)
		l++;
	num = malloc(sizeof(char) * (l + 1));
	if (!num)
	{
		free(s);
		return (NULL);
	}
	num[l] = '\0';
	if (flags.hash)
	{
		num[0] = '0';
		o = 1;
	}
	for (m = 0; m < l && s[m]; m++)
	{
		num[o ? m + 1 : m] = s[m];
	}
	free(s);
	return (num);
}
/**
 * printow - prints oct with specified width
 * @n: number string
 * @width: width
 * Return: number of characters printed
*/

int printow(char *n, int width)
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
 * print_oct - prints unsigned int from va_list in octal
 * @args: va_list arguement
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of items printed
 */

int print_oct(va_list args, flags flags, char mod, int width)
{
	unsigned int n, count = 0;
	unsigned short  m;
	unsigned long o;
	char *s;

	if (!mod)
	{
		n = va_arg(args, unsigned int);

		s = sprint_o(n, flags);
		count += printow(s, width);
	}
	if (mod == 'l')
	{
		o = va_arg(args, long int);
		s = sprint_o(o, flags);

		count += printow(s, width);
	}
	if (mod == 'h')
	{
		m = va_arg(args, int);
		s = sprint_o((short)m, flags);

		count += printow(s, width);
	}
	return (count);
}
