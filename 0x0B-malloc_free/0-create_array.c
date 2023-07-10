# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * *create_array - entry point
 *
 * @size: size of bytes reserved
 *
 * @c: first char of array
 *
 * Return: char ar
*/

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	ar[0] = c;

	return (ar);
}
