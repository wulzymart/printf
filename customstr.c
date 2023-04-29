#include "main.h"
/**
 * _strlenS - gets length for custom str conversion
 * @s: string
 * Return: length
*/

int _strlenS(char *s)
{
	int n = 0;

	while (*s)
	{
		if (*s < 32 || *s > 126)
			n += 4;
		else
			n++;
		s++;
	}
	return (n);
}
/**
 * Stostr - creates new string customizing it
 * @s: string to be printed
 * Return: new str or NULL;
 */

char *Stostr(char *s)
{
	int l = _strlenS(s), m, n;
	char *str = malloc(sizeof(char) * l + 1);

	if (!str)
		return (NULL);
	str[l] = '\0';
	for (m = 0, n = 0; s[m]; m++)
	{
		if (s[m] < 32 || s[m] > 126)
		{
			str[n++] = '\\';
			str[n++] = 'X';
			if (s[m] < 16)
			{
				char c = s[m] % 16;

				str[n++] = '0';
				str[n++] = c < 10 ? c + '0' : (c - 10) + 'A' ;
			}
			else
			{
				char c = s[m] / 16;
				char d = s[m] % 16;

				str[n++] = c < 10 ? c + '0' : (c - 10) + 'A' ;
				str[n++] = d < 10 ? d + '0' : (d - 10) + 'A' ;
			}
		}
		else
			str[n++] = s[m];
	}
	return (str);
}

/**
 * print_S - print a string from args list
 * @args: valist arguement to print from
 * @flags: flag
 * @mod: modifier
 * @width: width
 * Return: number of characters printed
 */
int print_S(va_list args, flags flags, char mod, int width)
{
	char *s = va_arg(args, char *), *str;
	int count = 0;

	(void)flags;
	(void)mod;
	(void)width;
	if (s == NULL)
		s = "(null)";
	if (*s == '\0')
		return (0);
	str = Stostr(s);
	if (!str)
		return -1; 
	count += prints(str);
	free(str);
	return (count);
}