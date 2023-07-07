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
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
