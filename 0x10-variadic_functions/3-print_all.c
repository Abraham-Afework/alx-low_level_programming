#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_all - function that prints all passed arguments
 * @format:is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int last, count;
	char *string_val, *separator;

	va_start(arg, format);
	last = count = 0;
	separator = ", ";

	while (format[last])
	{
		last++;
	}
	while (format[count] != '\0')
	{
		if (count == last - 1)
			separator = "";

		switch (format[count])
		{
		case 'c':
			printf("%c%s", va_arg(arg, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(arg, int), separator);
			break;
		case 's':
			string_val = va_arg(arg, char *);

			if (string_val == NULL)
				string_val = "(nil)";
			printf("%s%s", string_val, separator);
			break;
		case 'f':
			printf("%f%s", va_arg(arg, double), separator);
			break;
		}
		count++;
	}
	va_end(arg);
	printf("\n");
}
