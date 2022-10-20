#include<stdio.h>
/**
 * fizz_buzz - displays number from 1 to 100
 *
 * Description:  for multiples of 3 prints Fizz multiples of five print Buzz.
 *
 */
void fizz_buzz(void);

int main(void)

{

	fizz_buzz();
	return (0);
}

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzBuzz");
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
}
