/**
 *_pow_recursion - clalculates value of x raised to the power of y.
 *
 *@x: value to be raised
 *@y: power
 *
 * Return: the value of x the power of y -1 if y less than 0 and 1 if y is 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
