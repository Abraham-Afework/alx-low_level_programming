#include "main.h"
/**
 * print_times_table - generates multiplication table
 *
 *@n: int value max value of multiplier
 *
 * Description:the times table is form zero to 15
 *
 */

void print_times_table(int n)
{
	int a, b, c, d, e, mul;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				mul = a * b;
				if (mul >= 10 && mul < 100)
				{
					c = mul / 10;
				       	d = mul % 10;
					_putchar (' ');
					_putchar (' ');
					_putchar (c + '0');
					_putchar (d + '0');
					if (b != n)
					{
						_putchar (',');
					}
				}
				else if (mul >= 100)
				{
					c = mul / 100;
					d = (mul / 10) % 10;
					e = mul % 10;
					_putchar (' ');
					_putchar (c + '0');
					_putchar (d + '0');
					_putchar (e + '0');
					if (b != n)
					{
						_putchar (',');
					}
				}
				else
				{
					if (mul != 0 || b != 0)
					{
						_putchar (' ');
						_putchar (' ');
						_putchar (' ');
					}
					_putchar (mul + '0');
					if (b != n)
					{
						_putchar (',');
					}
				}
			}
			_putchar (10);
		}
	}
}
