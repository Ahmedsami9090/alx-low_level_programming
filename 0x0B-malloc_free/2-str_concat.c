# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * _strlen - size function
 *
 * @s: input
 *
 * Return: lenght of string
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * str_concat - entry point
 *
 * @s1: first string
 *
 * @s2: sec string
 *
 * Return: concat strings
*/
char *str_concat(char *s1, char *s2)
{
	char *m;
	int size1;
	int size2;
	int i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
