#include "main.h"
/**
 * jack_bauer - counts the the hour from 00:00 - 23:59
 *
 *  Return: 0  number always
 *
 */
void jack_bauer(void)
{
	int h, i, j, k, l, m;


	for (h = 0; h < 24; h++)
	{
		i = h / 10;
		j = h % 10;
		for (m = 0; m < 60; m++)
		{
			k = m / 10;
			l = m % 10;
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar(10);
		}
	}
}


