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
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
