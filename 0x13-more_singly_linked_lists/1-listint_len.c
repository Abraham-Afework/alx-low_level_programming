#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 *listint_len - function that prints the number of elements in the list
 * @h: head of the list
 * Return: the number of lists
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
