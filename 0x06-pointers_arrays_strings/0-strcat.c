# include "main.h"

/**
 * *_strcat - entry point
 *
 * @dest: input
 *
 * @src: input
 *
 * Return: conc. 2 strings
*/

char *_strcat(char *dest, char *src)
{
	int c;
	int c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
		return (dest);
