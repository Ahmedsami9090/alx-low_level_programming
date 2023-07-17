# include "dog.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * _strlen - entry point
 * @str: input
 * Return: lenght of string
*/

int _strlen(char *str)
{
	int l = 0;

	while (str++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcpy - entry point
 * @dest: destination
 * @src: source
 * Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - entry point
 * @name: name
 * @age: age
 * @owner: owner
 * Return: create new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == 0)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}



