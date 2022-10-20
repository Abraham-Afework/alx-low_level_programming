#include"main.h"
/**
 * print_diagonal - print out '_' character
 *
 * @n: the number of diagonal line to be printed
 *
 * Description: it will print '\' as given times of n
 *
 */
void print_diagonal(int n)
{
	int j, num;

	for (num = 0; num < n ; num++)
	{
		for (j = 0; j < num; j++)
		{
			_putchar(32);

		}
			_putchar(92);
			_putchar(10);
	}
}
