#include<stdarg.h>
/**
 * sum_them_all - function that prints sum of passed arguments
 *@n:number of arguments
 *
 * Return: the sum of all n integer and if n equals 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argument;
	unsigned int i;
	int val, sum;

	sum = 0;
	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(argument, int);
		sum += val;
	}
	va_end(argument);
	return (sum);
}
