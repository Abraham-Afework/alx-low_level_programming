#include<stdio.h>
#include"lists.h"
/**
 * print_list - function that prints a list
 * @h: a struct of list_t which contains the detail
 * Return: count of the linked list
 *
 */
size_t print_list(const list_t *h)
{
	unsigned int count, length;
	char *s;

	count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			s = h->str;
			length = h->len;
		}
		else
		{
			s = "(nil)";
			length =  0;
		}

		printf("[%d] %s\n", length, s);
		h = h->next;
		count++;
	}
	return (count);
}
