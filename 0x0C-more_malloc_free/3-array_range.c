#include"main.h"
#include<stdlib.h>
/**
 * array_range -function that creates an array of integers.
 *
 * @min:  min array value
 * @max: max array value
 *
 * Return: the pointer allocated memory of the array otherwise NULL
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++)
	{
		ptr[i] = min;
		i++;

	}

	return (ptr);
}
