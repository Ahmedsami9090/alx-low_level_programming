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
	if (n == 0)
	{
		 return (1);
	}
	res = n * factorial(n - 1);
	return (res);
}
