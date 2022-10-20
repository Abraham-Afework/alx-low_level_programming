#include <unistd.h>
/**
 * _isupper - checks if the character is upper case
 *
 * @c: int value to be passed and checked for
 *
 * Description: checks whether a character is a uppercase
 *
 * Return: 1 if the number is uppercase. 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
