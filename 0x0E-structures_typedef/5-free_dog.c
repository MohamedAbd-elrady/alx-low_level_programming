#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free a struct
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	free(d);
}
