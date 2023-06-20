#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 *
 * @n: user input
 *
 * Return: numbers until 98
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
