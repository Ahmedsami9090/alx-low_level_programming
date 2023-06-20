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
	int result;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);

			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
