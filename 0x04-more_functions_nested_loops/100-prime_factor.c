#include<stdio.h>
/**
 * main - print out largest prime factorial
 *
 * Description: it will print the largest prime factor of '612852475143
 *612852475143
 *Return: 0 always
 *
 */
int main(void)
{
	long num;
	int primeNum;

	num = 612852475143;
	primeNum = 2;

	while (primeNum < num)
	{
		if (num % primeNum == 0)
		{
			num = num / primeNum;
			primeNum = 2;
		}
		else
			primeNum++;
	}
	printf("%lu\n", num);
	return (0);

}
