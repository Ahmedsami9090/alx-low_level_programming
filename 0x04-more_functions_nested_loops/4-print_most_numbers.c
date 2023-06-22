#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description:a function that print some numbers
 *
 * Return: numbers from 0 to 9
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
	}
	_putchar('\n');
}
