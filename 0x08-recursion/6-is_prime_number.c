# include "main.h"

/**
 * is_prime_number - main entry
 *
 * @n: input
 *
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	if (n % 2 != 0 || n == 2)
		return (1);
	else
		return (0);
}
