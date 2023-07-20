#include "variadic_functions.h"

/**
 * print_numbers - entry point
 * @separator: char separator
 * @n: count of variables
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(li, n);
	while (i--)
	{
		printf("%d%s", va_arg(li, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(li);
}
