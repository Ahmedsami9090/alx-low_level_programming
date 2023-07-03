# include "main.h"

/**
 * *_strchr - entry point
 *
 * @s: the string to be searched in
 *
 * @c: the char to be searched
 *
 * Return: pointer of the first occurance or NULL
 * if unpresent
 *
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
