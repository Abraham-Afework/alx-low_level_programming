#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip to get from one
 * number to another
 * @n: value 1
 * @m: value 2
 *
 * Return: number of bits to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, flip;

	x = n ^ m;

	flip = 0;

	while (x != 0)
	{
		if ((x & 1) == 1)
		{
			flip++;
		}
		x = x >> 1;
	}
	return (flip);
}
