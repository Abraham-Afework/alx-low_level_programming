#include"main.h"

/**
 * main - entry point
 *
 * Discripiton: Prints out _putchar using while loop
 *
 * Return: always 0
 */

int main(void)
{
/* i is decleared for iteration*/

	int i;

/* char alphabet[] will contain the charachter "_putchar" */

	char alphabet[] = "_putchar";

	i = 0;

	while (alphabet[i] != '\0')
	{
	_putchar(alphabet[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
