#include"main.h"
/**
 * print_to_98 - function that prints number up to 98
 *
 * @num: starting point of anumber
 *
 */
void print_to_98(int num)
{


	if (num >= 98)
	{
		greaterthan98(num);
	}
	else if (num < 98)
	{
		lessthan98(num);

	}
	_putchar('\n');
}
/**
 * greaterthan98 - loops starting form number till 98
 *
 * @num: starting point of the number
 *
 */
void greaterthan98(int num)
{
	for (; num >= 98; num--)
	{
		print_to(num);
		if (num != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
/**
 * lessthan98 - loops starting form number till 98
 *
 * @num: starting point of the number
 *
 */
void lessthan98(int num)
{
	for (; num <= 98; num++)
	{
		print_to(num);
		if (num != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * print_to - loops starting form number till 98
 *
 * @num: starting point of the number
 *
 */
void print_to(int num)
{
	int i, j, k, l, isNegative;
	char integer[2000];

	k = isNegative = 0;

	if (num < 0)
	{
		isNegative = 1;
		num = num * -1;
	}
	if (isNegative == 1)
	{
		_putchar('-');
	}
	if (num >= 0  && num < 100)
	{
		i = num / 10;
		j = num % 10;
		if (num > 9)
		{
			_putchar(i + '0');
		}
		_putchar(j + '0');
	}
	else if (num >= 100)
	{
		while (num != 0)
		{
			j = num % 10;
			num = num / 10;
			integer[k] = j;
			k++;
		}
		for (l = k - 1; l >= 0; l--)
		{
			_putchar(integer[l] + '0');
		}
	}
}
