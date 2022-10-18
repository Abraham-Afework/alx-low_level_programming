#include <unistd.h>
#include"main.h"
#include<limits.h>
/**
 * print_last_digit - prints the last digit of number
 *
 * @n: int value to be passed
 *
 * Return: n which is the last digit of a number
 *
 */
int print_last_digit(int n)
{
	if (n < 0 && n != INT_MIN)
	{
		n = (n + n) / -2;
		n = n % 10;
	}
	else if (n == INT_MIN)
	{
		n = (INT_MAX % 10) + 1;
	}else
	{
	       	n = n % 10;
	}

	_putchar(n + '0');
	return (n);
}
