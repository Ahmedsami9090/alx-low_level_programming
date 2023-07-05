#include "main.h"

/**
 * _strlen_recursion - entry point
 *
 * @s : string
 *
 * Return: 0 success
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > '\0')
	{
		count = count + _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
