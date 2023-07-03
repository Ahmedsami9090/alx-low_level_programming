# include "main.h"

/**
 * *_strstr - entry point
 *
 * @haystack:string to be searched in
 *
 * @needle: char to be compared by haystack
 *
 * Return: char found in string
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *result;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = 0; needle[j] > '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				result = &haystack[i];
				return (result);
			}
		}
	}
	return ('\0');
}
