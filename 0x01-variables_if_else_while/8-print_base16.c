#include<stdio.h>
/**
 * main -all the excution carried out here
 * Return: returns 0.
 */
int main(void)
{

	int numCount,alphaCount;


	numCount = 48;
	alphaCount = 97;
	while (alphaCount < 103)
	{
		while(numCount < 58)
		{
		putchar(numCount);
		numCount++;
		}
	putchar(alphaCount);
	alphaCount++;
	}
	putchar(10);
	return (0);
}
