#include "main.h"

/**
 * _isupper - main entry
 *
 * @c: funtion input
 *
 * Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		_putchar('1');
	if (c >= 97 && c <= 122)
		_putchar('0');
}
