#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * maii - all things are excuited here
  * Returi: returns the value 0.
 */
int positive_or_negative(int i)

{
	

	srand(time(0));

	i = rand() - RAND_MAX / 2;

/* the if coidition checkes for the value of randum number n */
	if (i < 0)
	{
		printf("%d is negative\n",i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is positive\n", i);

	return (0);
}
