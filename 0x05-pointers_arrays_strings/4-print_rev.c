#include"main.h"
/**
* print_rev - outputs the reverse of a stirng
*Description - receives the address of char and tries to reverse the string
*@s: the address of the first char
*/
void print_rev(char *s)
{
	int count, j;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s = s + 1;
	}
	for (j = 1; j <= count; j++)
	{
		_putchar(*(s - j));
	}
	_putchar(10);
}
