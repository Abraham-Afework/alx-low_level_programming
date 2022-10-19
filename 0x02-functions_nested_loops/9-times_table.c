#include "main.h"
/**
 * times_table - checks if then number is greather than 66 and lessthan 122
 *
 *  Description: checks whether a charchter is a letter,lowercase or uppercase
 *
 */

void times_table(void)

{


	int a, b, c, d, mul, last;


	last = 9;

	for (a = 0; a <= last; a++)
	{
		for (b = 0; b <= last; b++)
		{
			mul = a * b;
			if (mul > 9)
			{
				c = mul / 10;
				d = mul % 10;
				_putchar(' ');
				_putchar(c + '0');
				_putchar(d + '0');
				if (b != last)
				{
					_putchar(',');
				}
			}
			else
			{
				if (mul != 0 || b != 0)
				{

				_putchar(' ');
				_putchar(' ');
				}
				_putchar(mul + '0');
				if (b != last)
				{
					_putchar(',');
				}
			}
		}
	_putchar(10); }
}
