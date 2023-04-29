#include "main.h"
/**
 * sprint_num - print any given number to screen
 * @n: number to print
 * Return: the numer of digidt printed
 */

char *sprint_num(unsigned long n)
{
	char *s = num2str(n, 10);

	return (s);
}
/**
 * sprint_snum - prints a signed number with flags
 * @n: number
 * @flags: flags
 * Return: number in string
 */
char *sprint_snum(long n, flags flags)
{
	char *s, *num;
	int k, l, m = 0, neg = 0;

	if (n < 0)
	{
		n = 0 - n;
		neg = 1;
	}
	s = num2str(n, 10);
	if (!s)
		return (NULL);
	l = _strlen(s);
	if (neg || flags.plus || flags.space)
		l++;
	num = malloc(sizeof(char) * (l + 1));
	if (!num)
	{
		free(s);
		return (NULL);
	}
		num[l] = '\0';
	if (neg)
		num[m++] = '-';
	if (!neg && flags.plus)
		num[m++] = '+';
	if (!neg && !flags.plus && flags.space)
		num[m++] = ' ';
	for (k = 0; s[k]; k++)
	{
		num[m++] = s[k];
	}
	free(s);
	return (num);
}

/**
 * printnw - prints number with specified width
 * @n: number string
 * @width: width
 * Return: number of charters printed
*/

int printnw(char *n, int width)
{
	int l, count = 0;
/*printf("%d, %s", width, n);*/
	l = _strlen(n);
	if (l < width)
		for (; l < width; l++)
			count += _putchar(' ');
	count += prints(n);
	free(n);
	return (count);
}
