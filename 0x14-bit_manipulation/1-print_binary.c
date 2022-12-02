#include"main.h"
/**
 * print_binary - function that convert decimal to binary
 *@n: the number to be converted
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	else
		print_decimal_to_binary(n);
}
/**
 * print_decimal_to_binary - convert decimal to binary
 *@n: the number to be converted
 *
 */
void print_decimal_to_binary(unsigned long int n)
{
	int remainder;

	if (n)
	{
		print_decimal_to_binary(n >> 1);
		remainder = n & 1;
		if (remainder)
		{
			_putchar(49);
		}
		else if (!remainder)
		{
			_putchar(48);
		}
	}
}
