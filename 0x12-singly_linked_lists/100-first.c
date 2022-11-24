#include<stdio.h>
void before_main(void) __attribute__((constructor));

/**
 * before_main - function that executes before main
 */

void before_main(void)
{
	char *str;

	str = "You're beat! and yet, you must allow,";
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	printf("\nI bore my house upon my back!\n");
}
