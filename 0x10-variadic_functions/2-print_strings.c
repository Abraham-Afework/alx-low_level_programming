#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - function that prints the string passed to it
 *
 * @separator: a string used for separating tha stirngs passsed
 * @n: the number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i, last;
	char *val, *nil;

	last = n - 1;
	nil = "(nil)";

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(arguments, char *);
		if (val == NULL)
		{
			val = nil;
		}
		printf("%s", val);

		if (separator != NULL && i != last)
		{
			printf("%s", separator);
		}
	}

	va_end(arguments);
	printf("\n");
}
