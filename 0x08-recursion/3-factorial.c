# include "main.h"

/**
 * factorial - entry point
 *
 * @n: input
 *
 * Return: result
*/

int factorial(int n)
{
	int res = 0;

	if (n < 0)
	{
		res = -1;
	}
	if (n == 1)
	{
		factorial(0) == 1;
	}
	else
	{
		res = n * factorial(n - 1);
	}
	return (res);
}
