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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(sizeof(char) * size);
		for (count = 0; count < size; count++)
		{
			ar[count] = c;
		
		}
	}
		return (ar);
}
