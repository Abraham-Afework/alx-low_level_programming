#include <unistd.h>
/**
 * _isalpha - checks if then number is greather than 66 and lessthan 122
 *
 * @alpha: int value to be passed
 *
 * Description: checks whether a charchter is a letter,lowercase or uppercase
 *
 * Return: 0 if the number is lowercase. 0 otherwise
 *
 */
int _isalpha(int alpha)
{
	if (alpha >= 65 && alpha <= 122)
	{
		return (1);
	}
	else
		return (0);

}
