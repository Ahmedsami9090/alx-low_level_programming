# include "main.h"

/**
 * print_rev - main entry
 *
 * @s: input
 *
 * Return: rev string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
