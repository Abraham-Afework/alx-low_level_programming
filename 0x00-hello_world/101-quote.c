#include<stdio.h>

/**
 * main - This prints the text given in puts.
 * Return: returns 0.
 */
int main(void)
{
	int count;
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";


	count = 0;

	while (quote[count] != '\0')
	{
		putchar (quote[count]);
		count++;
	}
	putchar (10);
	return (1);
}
