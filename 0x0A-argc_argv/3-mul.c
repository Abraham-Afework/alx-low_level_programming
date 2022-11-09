#include<stdio.h>
#include<stdlib.h>
/**
 * main - outputs the name of the program
 *
 * @argc: the number of values entered in command line
 * @argv: the string value of the enterd in command line
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	/* i created for iteration */
	int i, mul;

	i = 1;
	mul = 1;

	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	while (i < argc)
	{
		mul *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", mul);
	return (0);
}
