# include "main.h"

/**
 * *string_toupper - entry
 *
 * Description: convert lower to upper
 *
 * Return: result
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);

}
