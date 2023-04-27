/**
 * isflag - checks if a character is a flag
 * @c: char to check
 * Return: 1 if is flag 0 if not
 */

int isflag(char c)
{
	int j;
	char f[] = "+ #";

	for (j = 0; f[j]; j++)
	{
		if (c == f[j])
			return (1);
	}
	return (0);
}
/**
 * isspec - checks if a character is a specifier
 * @c: char to check
 * Return: 1 if is flag 0 if not
 */

int isspec(char c)
{
	int j;
	char s[] = "diucsSpoxX";

	for (j = 0; s[j]; j++)
	{
		if (c == s[j])
			return (1);
	}
	return (0);
}
/**
 * ismod - checks if a character is a modifier
 * @c: charcter to check
 * Return: 0 if not, 1 if it is
 */
int ismod(char c)
{
	char *mods = "lh";
	int j;

	for (j = 0; mods[j]; j++)
		if (mods[j] == c)
			return (1);
	return (0);
}
/**
 * isdigit - checks if a character is a digit
 * @c: character
 * Return: 1 if is digit and 0 if not
 */
int isdigit(char c)
{
	return (c >= '0' && <= '9');
}
