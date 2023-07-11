# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * *str_concat - entry point
 *
 * @s1: 1st string
 *
 * @s2: sec dtring
 *
 * Return: conc string
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char s;
	char *str;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s = s + s2[j];
	}
	str = malloc(sizeof(s) * 1);
	return (str);
}
