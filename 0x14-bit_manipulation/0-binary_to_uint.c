#include"main.h"
#include<stdio.h>

/**
 * binary_to_uint - function that changes binary to unsigned int
 *
 * @b:the binary to be changed
 *
 * Return: the converted number, or 0
 * if there is one or more chars in the string b
 * that is not 0 or 1 b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, base;
	const char *bin;

	bin = b;
	base = count = 0;

	if (!b)
	{
		return (0);
	}
	while (*bin != '\0')
	{
		count++;
		bin++;
	}
	count -= 1;

	while (*b != '\0')
	{
		if (*b == '1')
		{
			base += power(count);
			count--;
		}
		else if (*b == '0')
		{
			count--;
		}
		else
			return (0);
		b++;
	}
	return (base);
}

/**
 * power - function that calculates the power of 2
 *
 * @num: number in which 2 will be multiplied
 *
 * Return:the result
 */

int power(unsigned int num)
{
	unsigned int mul;

	mul = 1;

	while (num > 0)
	{
		mul = mul * 2;
		num--;
	}
	return (mul);
}
