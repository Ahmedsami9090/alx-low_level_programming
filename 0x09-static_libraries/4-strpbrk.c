# include "main.h"

/**
 * *_strpbrk - entry point
 *
 * @s: the string to be searched in
 *
 * @accept: the char to be compared to s
 *
 * Return: matched char
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *result;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				result = &s[i];
				return (result);
			}
		}
	}
	return ('\0');
}
