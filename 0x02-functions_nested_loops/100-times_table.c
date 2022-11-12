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
	int a, b, mul;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				mul = a * b;
				checker(mul, b, n);
			}
			_putchar (10);
		}
	}
}
/**
 * checker - prints the times table format based on the number passed
 *
 * @mul: the number times table
 * @b: a number in printed  row
 * @n: the last number in arow
 *
 */

void checker(int mul, int b, int n)
{
	int  c, d, e;

	if (mul >= 10 && mul < 100)
	{
		c = mul / 10;
		d = mul % 10;
		_putchar (' ');
		_putchar (' ');
		_putchar (c + '0');
		_putchar (d + '0');

		printcomma(b, n);
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

		printcomma(b, n);
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

		printcomma(b, n);
	}
}
/**
 * printcomma - prints comma after every number except the last number in a row
 *
 * @b: a number in printed  row
 * @n: the last number in arow
 *
 */
void printcomma(int b, int n)
{
	if (b != n)
	{
		_putchar (',');
	}
}
