#include "main.h"

/**
 * swap_int - a function to swap value of 2 int
 *
 * @a: function input
 *
 * @b: function input
 *
 * Return: two swaped int
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
