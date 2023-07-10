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
	unsigned int count;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == malloc(INT_MAX))
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			ar[count] = c;

		}

		return (ar);
	}
}
