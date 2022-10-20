#include"main.h"
/**
 * print_square - print out '_' character
 *
 * @size: the size of square to be printed
 *
 * Description: it will print '#' as given times of the size
 *
 */
void print_square(int size)
{
	int width, length;

	if (size == 0 || size < 0)

	{
		_putchar(10);
	}
	else
	{
		for (width = 0; width < size; width++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
