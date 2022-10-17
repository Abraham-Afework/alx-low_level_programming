#include <stdio.h>
/**
 * main - a function where all thing excuted
 *
 * Return: returns the value 0
 */

int main(void)

{
	     /*variable declaration for the operation*/
	int firstNumber, secondNumber, thirdNumber, lastNumber;


	firstNumber = 48;   /*ASCII code which  which represent the number 0 */
	secondNumber = 49;  /*ASCII code which which represent the number 0 */
	thirdNumber = 50;
	lastNumber = 58;      /*ASCII code which which represent the number 9 */
	while (firstNumber < lastNumber)
	{
		secondNumber = firstNumber + 1;
		while (secondNumber < lastNumber)
		{
			thirdNumber = secondNumber + 1;
			while (thirdNumber < lastNumber)
			{
				putchar (firstNumber);
				putchar (secondNumber);
				putchar (thirdNumber);
				if (firstNumber != 55)
				{
					putchar (44);
					putchar (32);
				}
				thirdNumber++;
			}
			secondNumber++;
		}
		firstNumber++;
	}
	putchar(10);
	return (0);
}
