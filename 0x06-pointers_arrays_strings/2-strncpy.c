# include "main.h"

/**
 * *_strncpy - entry
 *
 * @dest: input
 *
 * @src: input
 *
 * @n: input
 *
 * Return: copy 2 strings
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i] = '\0';
	return (dest);
}
