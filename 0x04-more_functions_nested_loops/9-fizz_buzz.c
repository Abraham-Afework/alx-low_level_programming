#include<stdio.h>
/**
 * main - entry point
 *
 * Description:  for multiples of 3 prints Fizz multiples of 5 print Buzz
 *
 * Return: zero always
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');

		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
