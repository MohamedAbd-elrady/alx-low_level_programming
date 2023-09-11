#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: pointer to copy
 * @src: pointer to string
 *
 * Return: return pointer of copied data
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 * Return: pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *name_cpy;
	char *owner_cpy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_cpy = malloc(_strlen(name));
		if (name_cpy == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->name = _strcpy(name_cpy, name);
	}
	else
		doggy->name = NULL;

	doggy->age = age;

	if (owner != NULL)
	{
		owner_cpy = malloc(_strlen(owner));
		if (owner == NULL)
		{
			free(name_cpy);
			free(doggy);
			return (NULL);
		}
		doggy->owner = _strcpy(owner_cpy, owner);
	}
	else
		doggy->owner = NULL;
	return (doggy);
}
