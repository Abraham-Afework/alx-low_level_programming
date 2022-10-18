#include "main.h"
/**
  * print_alphabet_x10 - prints alphabets from a -z
  * Descripiton: displays the alphabets a to z ten times
  * Return: returns the value 0.
 */

void print_alphabet_x10(void)
{
	char a, z;
	int timesTen;


	timesTen = 0;

	while (timesTen <= 10)
	{
		a = 'a';
		z = 'z';
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		timesTen++;
	}
}
