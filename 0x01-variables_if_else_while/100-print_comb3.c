#include<stdio.h>
/**
 * main -all the excution carried out here
 * Return: returns 0.
 */
int main(void)
{

	/* variable declaration for the operation */
	int firstNumber, secondNumber, lastNumber, counter, tenTimes;

	firstNumber = 48;   /* ASCII code which  which represent the number 0 */
	secondNumber = 48;  /* ASCII code which which represent the number 0 */
	lastNumber = 57;      /* ASCII code which which represent the number 9 */
	tenTimes = 10;       /* variable decleared for iteration to print */
	while (firstNumber < lastNumber)
	{
		counter = 1;
		secondNumber = firstNumber + 1;

		while (counter < tenTimes)
		{
			putchar(firstNumber);
			putchar(secondNumber);
			if (!(firstNumber == 56 && secondNumber == 57))
				/*if sastisfied print comma */
			{
				putchar(44);
				putchar(32);
			}
			counter++;
			secondNumber++;
		}
		firstNumber++;
		tenTimes--;
	}
	putchar(10);
	return (0);
}
