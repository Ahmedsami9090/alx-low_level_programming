# include "main.h"

/**
 * *_memset - entry point
 *
 * @s: pointer to memory
 *
 * @b: the constant byte
 *
 * @n: no. of bytes to be filled
 *
 * Return: pointer to memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

