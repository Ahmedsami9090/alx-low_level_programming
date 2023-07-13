# include "main.h"

/**
 * malloc_checked - entry point
 *
 * @b: size of byte
 *
 * Return: 0 success
*/

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == 0)
	{
		exit(98);
	}
	else
	{
		return (m);
	}
}
