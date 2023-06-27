# include "main.h"
/**
 * *_strcpy - main entry
 *
 * @dest: input
 *
 * @src: input
 *
 * Return: output
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
	
