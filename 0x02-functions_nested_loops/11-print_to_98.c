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

	if (n > 98)
	{
		for (i = n; i >= 97; i--)
		{
			printf("%d, ", i);
			printf(" 98");
		}
	}
	else
	{
		for (i = n; i <= 97; i++)
		{
		printf("%d, ", i);
		printf(" 98");
		}
	}
}
