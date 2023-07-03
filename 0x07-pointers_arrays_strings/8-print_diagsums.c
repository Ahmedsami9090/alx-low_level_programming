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
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
