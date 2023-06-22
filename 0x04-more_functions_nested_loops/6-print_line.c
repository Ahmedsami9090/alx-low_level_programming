#include "main.h"

/**
 * print_line - entry
 *
 * @n: number of line
 *
 * Return: the line
*/

void print_line(int n)
{
	int i;
	int ch = '_';

	for (i = 0; i < n; i++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
