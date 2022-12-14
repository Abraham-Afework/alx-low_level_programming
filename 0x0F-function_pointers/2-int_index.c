#include<stdio.h>
#include"function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *
 * @array:array of functions
 * @size: the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element
 *        for which the cmp function does not return 0
 *        If no element matches, return -1
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, counter;

	counter = 0;

	if (size < 0 || cmp == NULL || array == NULL)

		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(*array))
		{
			return (counter);
		}
		array++;
		counter++;
	}
	return (-1);
}
