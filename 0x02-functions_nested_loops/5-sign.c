#include "main.h"

/**
 * print_sign - a function that print a sign
 *
 * @n: function input
 *
 * Return: 1 or 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
			return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
			return (0);
	}
	else
	{
		_putchar(0);
			return (0);
	}
}
