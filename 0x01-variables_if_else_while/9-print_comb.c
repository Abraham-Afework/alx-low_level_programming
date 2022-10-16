#include<stdio.h>
/**
 * main -all the excution carried out here
 * Return: returns 0.
 */
int main(void)
{

	int count;


	count = 0;
	while (count <= 9)
	{
		putchar(48 + count);
		if (count != 9)
		{
			putchar(44);
			putchar(32);
		}
		count++;
	}
<<<<<<< HEAD
	putchar(32);
=======
	putchar(10);
>>>>>>> 8cc521a5d32ba5a808c9dc34ca913f4cafe6f94a
	return (0);
}
