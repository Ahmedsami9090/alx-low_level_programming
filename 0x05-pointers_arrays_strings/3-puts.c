# include "main.h"

/**
 * _puts - main entry
 *
 * @str: input function
 *
 * Return: string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
