# include "main.h"
# include <stdio.h>

/**
 * print_diagsums - entry point
 *
 * @a: array input
 *
 * @size: array size
 *
 * Return: sum of diagonal of array
*/

void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + a[i][j];
			if (i + j == (size - 1))
				sum2 = sum2 + a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
