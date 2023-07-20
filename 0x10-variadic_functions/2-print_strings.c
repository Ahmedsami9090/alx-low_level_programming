#include "variadic_functions.h"

/**
 * print_strings - entry point
 * @separator: separator char
 * @n: counter
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list li;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(li, n);
	while (i--)
	{
		if (!va_args(li, char))
			va_args(li, char) == "nill";
		printf("%s%s", va_args(li, char), i ? (separator ? separator : "") : "\n");
	}
	va_end(li);
}
