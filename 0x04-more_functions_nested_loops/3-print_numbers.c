#include"main.h"
/**
 * print_numbers -print out numbers
 *
 * Description: it will displa numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar(10);

}
