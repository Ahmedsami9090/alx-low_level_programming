#include "main.h"

/**
 * times_table - a function that print
 *
 * Return: times table
*/

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) / 10);
			_putchar((i * j) % 10);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
