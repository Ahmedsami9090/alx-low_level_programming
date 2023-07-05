# include "main.h"

/**
 * _sqrt_recursion - entry
 *
 * sq_no - test function
 *
 * @n: input
 *
 * @val: test value
 *
 * Return: sq root of input or -1 if invalid
*/

int sq_no(int n, int val);

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
