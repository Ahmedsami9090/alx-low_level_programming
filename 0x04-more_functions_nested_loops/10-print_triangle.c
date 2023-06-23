include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * Return: shape
*/

void print_triangle(int size)
{
	int h;
	int b;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if (h + b <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

