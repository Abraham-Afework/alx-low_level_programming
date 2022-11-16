#include"function_pointers.h"
#include<stdio.h>
#include<stddef.h>
/**
 * array_iterator - function that prints .
 *
 * @array: array
 * @size: size of array to be printed
 * @action: pointer to a function contanining int values
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(*array);
		array++;
	}
}
