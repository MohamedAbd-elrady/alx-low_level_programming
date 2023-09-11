#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creats a struct with info of a dog
 * @d: new struct name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
