#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - all things are excuited here
  * Return: returns the value 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* the if condition checkes for the value of randum number n */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is positive\n", n);

	return (0);
}
