#include"main.h"
#include<stdio.h>
#include<stddef.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: the number to be changed
 * @index: a bit index
 *
 * Return: 1 if error occurred -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary, i;

	i = index;

	if (i > 64)
	{
		return (-1);
	}
	else
	{
		binary = 1 << i;
		*n = *n & ~binary;
		return (1);
	}
}
