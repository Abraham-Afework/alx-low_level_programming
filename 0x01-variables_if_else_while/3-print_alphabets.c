#include<stdio.h>
/**
  * main - all things are excuited here
  * Return: returns the value 0.
 */

int main(void)
{
	char alphabet = 'a', upperCase = 'A';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	while (upperCase <= 'Z')
	{
	putchar(upperCase);
	upperCase++;
	}
	putchar('\n');
	return (0);
}
