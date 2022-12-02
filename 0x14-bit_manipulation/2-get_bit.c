#include<stdio.h>
#include<stddef.h>
#include"main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 *@index: is the index, starting from 0 to bit index
 *@n:the number
 * Return:the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count, max, num;

	max = count = 0;
	num = n;

	while (num > 0)
	{
		num = num >> 1;
		max++;
	}
	if (index <= max)
	{
		while (n > 0)
		{
			if ((n & 1) && index == count)
			{
				return (1);
			}
			else if (!(n & 1) && index == count)
			{
				return (0);
			}
			n = n >> 1;
			count++;
		}
	}
	return (-1);
}
