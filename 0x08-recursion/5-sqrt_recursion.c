# include "main.h"

/**
 * _sqrt_recursion - entry
 *
 * @n: input
 *
 * Return: sq root of input or -1 if invalid
*/

int _sqrt_recursion(int n)
{
	return (sq_no(n, 1));
}

int sq_no(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sq_no(n, val + 1));
	else
		return (-1);
}
