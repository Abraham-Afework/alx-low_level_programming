#include"main.h"
/**
 * _abs - checks if then number is greather than 66 and lessthan 122
 *
 * @n: int value to be passed
 *
 * Description: checks a number and stdout absolute value
 *
 * Return: n if the number is positive or zero mul if numuber -ve
 *
 */
int _abs(int n)
{
	int mul;


	if (n >= 0)
	{
		return (n);
	}
	else
	{
		mul = (n + n) / -(2);
		return (mul);
	}
}
