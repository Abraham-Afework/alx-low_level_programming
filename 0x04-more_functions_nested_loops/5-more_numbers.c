#include"main.h"
/**
 * more_numbers - print out numbers
 *
 * Description: it will display numbers from 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i, count, num;

	count = 10;

	while (count > 0)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				i = num / 10;
				_putchar(i + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar(10);
		count--;
	}

}
