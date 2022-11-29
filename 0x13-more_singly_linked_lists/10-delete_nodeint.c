#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * delete_nodeint_at_index - adds a node at the nth position in a list
 *
 * @head: the adderess of the list head
 * @index: the position in which node is deleted
 *
 * Return: 1 if succeeded -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp;
	unsigned int count;

	count = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index - 1)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
