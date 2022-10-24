#include"main.h"
/**
* _puts - function
* Description - receives the address of a char display to stdout
*@str: the address of single char
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
