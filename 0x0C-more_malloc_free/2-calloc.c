#include"main.h"
#include<stdlib.h>
/**
 *  _calloc -function that allocates memory for an array, using malloc.
 *
 * @nmemb: array elements
 * @size: size of each array element
 *
 * Return: the pointer allocated memory otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size), i++)
	{
		ptr[i] = '\0';
	}

	return (ptr);
}
