# include "main.h"

/**
 * _nemset - entry
 *
 * @s: input
 *
 * @b: const
 *
 * @n: byte
 *
 * Return: char
*/

char *_nemset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}

/**
 * _calloc - entry
 *
 * @nmemb: input
 *
 * @size: input
 *
 * Return: 0 success
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_nemset(m, 0, sizeof(int) * nmemb);
	return (m);
}


