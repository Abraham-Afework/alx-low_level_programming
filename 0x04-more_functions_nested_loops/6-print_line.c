#include"main.h"
/**
 * print_line - print out '_' character
 *
 * @n: the number of line to be printed
 *
 * Description: it will print _ as given assigned
 *
 */
void print_line(int n)
{
	int num;

	for (num = 0; num < n ; num++)
	{
		_putchar(95);
	}
	_putchar(10);

}
