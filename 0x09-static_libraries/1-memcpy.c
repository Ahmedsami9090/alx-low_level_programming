# include "main.h"

/**
 * *_memcpy - entry point
 *
 * @dest: area that data will be pasted
 *
 * @src: area copied from memory
 *
 * @n: no of bytes copied
 *
 * Return: char of copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
