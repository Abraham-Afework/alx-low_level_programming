#include <unistd.h>
/**
 * _isdigit - checks if the  passed number is a digit
 *
 * @c: int value to be passed and checked
 *
 * Description: checks whether a number is a digit or not in ASCII code.
 *
 * Return: 1 if the number is digit. 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
