#include"main.h"
#include<stdio.h>
#include<stddef.h>
/**
 * flip_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: the number to be changed
 * @m: a bit index
 *
 * Return: 1 if error occurred -1
 *
 */

 unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int binary, i;

	i = index;

	if (n == NULL && index > 64)
	{
		return (-1);
	}
	else
	{
		binary = 1 << i;
		*n = *n | binary;
		return (1);
	}
}
