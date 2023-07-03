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

	for (i = 0; needle[i] > '\0'; i++)
	{
		for (j = 0; haystack[j] > '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				result = &needle[i];
				return (result);
			}
		}
	}
	return ('\0');
}
