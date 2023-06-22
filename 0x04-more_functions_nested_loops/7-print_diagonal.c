#include "main.h"

/**
 * print_diagonal - entry point
 *
 * @n: number of rows
 *
 * Return: diagonal shape
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
