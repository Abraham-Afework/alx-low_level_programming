#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 *
 * @head: head of the linkied list
 * @index: index of the node, starting at 0
 *
 * Return: if node does not exist, return NULL other wise node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
