#include<stdio.h>
/**
  * main - all things are excuited here
  * Return: returns the value 0.
 */

int main(void)
{
	int i;
	char alphabet[] = "_putchar";

	i=0;

	while (alphabet[i] != '\0')
	{
	putchar(alphabet[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
