#ifndef __DOG_H__
#define __DOG_H__
/**
 * struct dog - contains detail information about dog
 *
 * dog_t - typedef for struct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 */
typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */

#endif
