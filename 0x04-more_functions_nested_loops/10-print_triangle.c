#include"main.h"
/**
 * print_triangle - print out '#' character
 *
 * @size: the number of times
 *
 * Description: it will print '#' as given times 1 of the size
 *
 */
void print_triangle(int size)
{
	int j, k, l, num;

	k = 0;

	if (size == 0 || size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (num = size; num > 0; num--)
		{
			for (j = 1; j < num; j++)
			{
				_putchar(32);
			}
			k++;

			for (l = k; l > 0; l--)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
