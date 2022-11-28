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
	int count;

	count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
