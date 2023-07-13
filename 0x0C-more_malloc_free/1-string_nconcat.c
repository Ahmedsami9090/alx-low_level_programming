# include "main.h"

/**
 * string_nconcat - entry point
 *
 * @s1: 1st char
 *
 * @s2: sec char
 *
 * @n: first n bytes of s2 char
 *
 * Return: as shown
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len_s1, len_s2;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	str = malloc(len_s1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
