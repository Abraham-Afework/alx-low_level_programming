#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * insert_nodeint_at_index - adds a node at the nth position in a list
 *
 * @head: the adderess of the list head
 * @idx: the position in which node is inserted
 * @n: the node to be added
 *
 * Return:the address of the new element,or NULL if it failed
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int count;

	count = 0;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (0);
	}

	if (*head == NULL)
		return (NULL);

	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (count < idx)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		count++;
	}
	return (NULL);
}
