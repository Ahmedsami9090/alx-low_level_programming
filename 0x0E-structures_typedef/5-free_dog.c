# include "dog.h"
# include <stdlib.h>

/**
 * free_dog - entry point
 * @d: input
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	free(d);
}