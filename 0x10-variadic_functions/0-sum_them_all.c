#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 * @n: number of variables in function
 *
 * Return: sum of function variables
*/

int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list arg;
	int sum = 0;

	if (n == 0)
		return (0);
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(arg, int);
		}
		va_end(arg);
		return (sum);
}
