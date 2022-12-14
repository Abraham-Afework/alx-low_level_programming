#include<stdio.h>
#include<stdlib.h>
/**
 * main - outputs the sum the value given in comand line
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
	int i, sum;
	char *end;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		strtol((argv[i]), &end, 10);

		if (*end != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
