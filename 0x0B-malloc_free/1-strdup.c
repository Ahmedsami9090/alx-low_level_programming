# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * *_strdup - entry point
 *
 * @str: string to be duplicated
 *
 * Return: pointer to dup string
*/

char *_strdup(char *str)
{
	int i;
	int j;
	char *s;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s = malloc(sizeof(*str) * i + 1);
	}
	if (s == 0)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		s[j] = str[i];
	}
	return (s);
}
