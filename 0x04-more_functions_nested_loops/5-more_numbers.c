#include "main.h"

/**
 * more_numbers - main entry
 *
 * Description: a function that print 10 lines
 *
 * Return: 10 lines of numbers
*/

void more_numbers(void)
{
	int num;
	int r;
	int c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			num = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				num = c % 10;
			}
			_putchar(num + 48);

		}
		_putchar('\n');
	}
}
