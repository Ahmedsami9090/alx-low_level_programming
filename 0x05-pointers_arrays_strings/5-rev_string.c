# include "main.h"

/**
 * rev_string - main entry
 *
 * @s: function input
 *
 * Return: rev string
*/

void rev_string(char *s)
{
	int j, k;
	char tmp;

	for (j = 0; s[j] != '\0'; ++j)
		;

	for (k = 0; k < 1 / 2; k++)
	{
		tmp = s[k];
		s[k] = s[j - 1 - k];
		s[j - 1 - k] = tmp;
	}
}
