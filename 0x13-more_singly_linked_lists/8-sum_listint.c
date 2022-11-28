#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * sum_listint - function that sums the data in the list_t
 * @head: head of the linkied list
 *
 * Return: if node empty return NULL other wise sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
