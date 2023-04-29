#include "main.h"
/**
 * sprint_x - prints a unsigned int in hex with flags
 * @n: number
 * @flags: flags
 * Return: number in string
 */
char *sprint_x(long n, flags flags)
{
	char *s, *num;
	int l, m, o = 0;

	s = num2str(n, 16);
	if (!s)
		return (NULL);
	l = _strlen(s);
	if (n && flags.hash)
		l += 2;
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
		num[1] = 'x';
		o = 1;
	}
	for (m = 0; m < l && s[m] ; m++)
	{
		num[o ? m + 2 : m] = s[m];
	}
	free(s);
	return (num);
}
/**
 * sprint_X- prints a signed number in hex with flags
 * @n: number
 * @flags: flags
 * Return: number in string
 */
char *sprint_X(long n, flags flags)
{
	char *s, *num;
	int l, m, o = 0;

	s = num2STR(n, 16);
	if (!s)
		return (NULL);
	l = _strlen(s);
	if (n && flags.hash)
		l += 2;
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
		num[1] = 'X';
		o = 1;
	}
	for (m = 0; m < l && s[m]; m++)
	{
		num[o ? m + 2 : m] = s[m];
	}
	free(s);
	return (num);
}
