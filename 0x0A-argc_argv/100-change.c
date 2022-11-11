#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the minimum number of coins to make change for amount of
 * money
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
 */


int main(int argc, char *argv[])
{
	int coins, converted;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		converted = atoi(argv[1]);

		coins = change(converted);

		printf("%d\n", coins);
		return (0);
	}
}
/**
 * change - function that calculates the change for an amount of money
 *
 * @money:an amount of money.
 *
 * Return: count of the change
 */
int change(int money)
{
	int count, i, j, cents[5];

	count = 0;
	cents[0] = 25;
	cents[1] = 10;
	cents[2] = 5;
	cents[3] = 2;
	cents[4] = 1;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; money >= cents[i]; j++)
		{
			count++;
			money -= cents[i];
		}
	}
	return (count);
}
