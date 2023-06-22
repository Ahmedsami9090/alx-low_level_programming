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
	int i;
	int ch;
	int ch2;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 48; ch <= 57; ch++)
		{
			_putchar(ch);
		}
		for (ch2 = 48; ch2 <= 52; ch2++)
		{
			_putchar(49);
			_putchar(ch2);
		}
		_putchar('\n');
	}
}
