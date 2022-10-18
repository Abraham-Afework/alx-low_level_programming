#include"main.h"
/**
 * print_sign - checks if then number is greather than 66 and lessthan 122
 *
 * @n: int value to be passed
 *
 * Description: checks whether a number is a positive,zero or negative
 *
 * Return: 0 if the number is zero 1 if numuber +ve -1 otherwise.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
