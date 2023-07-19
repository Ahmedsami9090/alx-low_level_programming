#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: input
 * @size: input
 * @action: input
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *l = array + size - 1;

	if (array && siae && action)
		while (array <= l)
			action(*array++);
}
