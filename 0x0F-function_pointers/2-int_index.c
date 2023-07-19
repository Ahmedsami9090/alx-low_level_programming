#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: array to be tested
 * @size: size of array
 * @cmp: function passed to the function
 * Return: the first index to element does not return 0
 * or -1 if no match or error
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
