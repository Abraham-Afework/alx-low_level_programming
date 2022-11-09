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
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
