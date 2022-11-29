#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * print_listint - function that prints the the element of the list
 * @h: head of the list
 * Return: the number of lists found
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h && h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
