#include "main.h"
/**
 * _abs - gets absolute value of a number
 * @n: number
 * Return: absolute value
 */
long _abs(long n)
{
	return (n >= 0 ? n : n * -1);
}

/**
 * num_len - gets the length of string for an integer print with any base
 * @n: number
 * @b: base
 * Return: length
 */

int num_len(unsigned long n, int b)
{
	unsigned int l = 1;

	for (; n > (unsigned int)b - 1; n /= b)
		l++;
	return (l);
}

/**
 * num2str - converts any signed number to string
 * @n: number
 * @b: base
 * Return: pointer to string
 */

char *num2str(unsigned long n, int b)
{
	int l = 0, j;
	char *str;

	l += num_len(n, b);
	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	str[l] = '\0';
	for (j = l - 1 ; j >= 0; j--)
	{
		if (b < 11)
			str[j] = n % b + '0';
		else
			str[j] = n % b < 10 ? n % b + '0' :
				(n % b) - 10 + 'a';
		n /= b;
	}
	return (str);
}
/**
 * num2STR - converts any signed number to string
 * @n: number
 * @b: base
 * Return: pointer to string
 */

char *num2STR(unsigned long n, int b)
{
	int l = 0, j;
	char *str;

	l += num_len(n, b);
	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	str[l] = '\0';
	for (j = l - 1 ; j >= 0; j--)
	{
		if (b < 11)
			str[j] = n % b + '0';
		else
			str[j] = n % b < 10 ? n % b + '0' :
				(n % b) - 10 + 'A';
		n /= b;
	}
	return (str);
}
