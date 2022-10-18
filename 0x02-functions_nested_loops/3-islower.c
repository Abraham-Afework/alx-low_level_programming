#include <unistd.h>
/**
 * _islower - function which checks whether a charchter is lowercase or not
 *
 * @lower: the ascii code will be checked as an int
 *
 * Return: 0 if the number is lowercase. 0 otherwise
 */
int _islower(int lower)
{
	if (lower >= 97 && lower <= 122)
	{
		return (1);
	}
	else
		return (0);

}
