#include<stdio.h>
/**
  * main - all things are excuited here
  * Return: returns the value 0.
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
