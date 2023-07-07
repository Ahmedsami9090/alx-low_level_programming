#include "main.h"

/**
 * *_strncat - entry point
 *
 * @dest: input
 *
 * @src: input
 *
 * @n: no of bytes
 *
 * Return: conc. strings
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c + c2] = src[c2];
	dest[c + c2] = '\0';
	return (dest);
}
