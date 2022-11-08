#include"main.h"
#include<stdlib.h>
/**
 * create_array - function allocates a memory
 *
 * @size: the size to be allocated
 * @c: char that is going to be assigned in the allocated memory
 *
 * Return:if size > 0 returns pointer to char otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr, *temp_ptr;

	ptr = (char *) malloc(size * sizeof(char));
	temp_ptr = ptr;

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*temp_ptr++ = c;
		}
	}	return (ptr);
}
