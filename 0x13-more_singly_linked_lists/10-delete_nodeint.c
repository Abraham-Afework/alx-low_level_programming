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
		
	while (*head != NULL)
	{
		if (count == index - 1)
		{
			new = *head;
		}
		if (index == 0)
		{
		       	*head = (*head)->next;
		}
		if (count == index && count != 0)
		{
			new->next = (*head)->next;
		       free(*head);	
		}
		*head = (*head)->next;
		count++;
	}
	*head = temp;
	return (1);
}
