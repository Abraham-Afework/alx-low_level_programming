#include"main.h"
/**
 * print_number -print out numbers
 *
 * @num: the nuber to be printed
 *
 * Description: it will display the number entered
 *
 */
void print_number(int num)
{
	int i, j, k, l, isNegative;
	int integer[100];


	isNegative = 0;
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
	}}
