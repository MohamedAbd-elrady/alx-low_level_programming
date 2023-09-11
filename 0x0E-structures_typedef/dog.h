#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that defines dog info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - creats a struct with info of a dog
 * @d: new struct name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
