#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers - function that prints the value of argumment passed
*
* @separator: the string to be printed between numbers
* @n: is the number of integers passed to the function
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i, last;
	int val;

	va_start(arguments, n);
	last = n - 1;

	for (i = 0; i < n; i++)
	{
		val = va_arg(arguments, int);
		printf("%d", val);

		if (separator != NULL && i != last)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
