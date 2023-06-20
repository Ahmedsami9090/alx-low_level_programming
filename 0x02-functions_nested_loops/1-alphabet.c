#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: a program that do some printing
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
