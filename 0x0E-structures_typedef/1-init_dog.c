#include "dog.h"
/**
 * init_dog - initialize the detail for dog
 * @d: a poineter for stuct dog
 * @name:name of the dog
 * @age: name of the dog
 * @owner:owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
