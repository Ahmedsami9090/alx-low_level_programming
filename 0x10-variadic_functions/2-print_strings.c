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
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(li, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(li, char *)) ? str : "(nill)"
				, i ? (separator ? separator : "") : "\n");
	}
	va_end(li);
}
