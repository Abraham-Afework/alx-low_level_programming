#include"main.h"
/**
 * print_diagonal - print out '_' character
 *
 * @n: the number of diagonal line to be printed
 *
 * Description: it will print '\' as given times of n
 *
 */
void print_triangle(int size)
{
	int j, num;


	if (size == 0 || size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (num = 0; num < n ; num++)
		{
			
                        
			for (j = size; j > 0; j--)
			{
				_putchar(10);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
