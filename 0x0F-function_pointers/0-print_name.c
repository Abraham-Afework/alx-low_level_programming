#include"function_pointers.h"
#include<stdio.h>
/**
 * print_name - function that prints a name.
 *
 * @name: name to be printed
 * @f: function pointer that pass character pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
		f(name);
}
