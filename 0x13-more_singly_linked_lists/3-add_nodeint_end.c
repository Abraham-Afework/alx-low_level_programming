#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_nodeint_end - function that add a node at the end of a list
 *
 * @head:the adderess of the list head
 * @n:the data
 *
 * Return:the address of the new element,or NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}

