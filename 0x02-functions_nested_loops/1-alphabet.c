#include "main.h"
/**
  * print_alphabet - prints alphabets from a -z
  * Return: returns the value 0.
 */

void print_alphabet(void)
{
	char a, z;

	a = 'a';
	z = 'z';

	while (a <= z)
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');

}

