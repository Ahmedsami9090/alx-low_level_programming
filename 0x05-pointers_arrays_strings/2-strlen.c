# include "main.h"
# include <string.h>

/**
 * _strlen - main entry
 *
 * @s: function input
 *
 * Return: lenght of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
