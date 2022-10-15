#include<stdio.h>
/**
 * main -all the excution carried out here
 * Return: returns 0.
 */
int main(void)
{

	int count;


	count = 0;
	while (count < 10)
	{
		putchar(48 + count);
		if (count != 9)
		{
			putchar(44);
		}
		putchar(32);
		count++;
	}
	return (0);
}
