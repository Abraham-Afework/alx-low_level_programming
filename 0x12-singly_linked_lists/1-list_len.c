#include<stdio.h>
#include"lists.h"
/**
 * list_len - function that prints a list
 * @h: a struct of list_t which contains the detail
 * Return: count lenght of the linked list
 *
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
