#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main.
 *
 * @argc: argument count.
 * @argv: argument values.
 *
 * Return: 0.
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;
	int (*ptrfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]),
	num2 = atoi(argv[3]);
	operator = argv[2];

	ptrfunc = get_op_func(operator);
	if (ptrfunc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && num2 == 0) ||
	    (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	calc = ptrfunc(num1, num2);
	printf("%d\n", calc);
	return (0);
}
