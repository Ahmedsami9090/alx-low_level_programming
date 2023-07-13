# include "main.h"

/**
 * array_range - entry
 * @min: input
 * @max: input
 * Return: int
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
