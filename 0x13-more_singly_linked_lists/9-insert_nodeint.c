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
	
	temp = *head;
	while (count < idx)
	{
		printf("this %p\n",temp->next);
		temp = temp->next;
		new->next = temp;
		count++;
	}
	new->n = n;
	temp = temp->next;
	return (*head);
}
