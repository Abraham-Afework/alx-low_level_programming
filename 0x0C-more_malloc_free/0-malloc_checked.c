#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked -  function that allocates memory using malloc
 *
 * @b:memory byte to be allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
