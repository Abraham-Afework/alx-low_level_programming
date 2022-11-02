#include "main.h"
/**
 * _puts_recursion - prints put a string given
 *
 *@s:a string to be displayed
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
