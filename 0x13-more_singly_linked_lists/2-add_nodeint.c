#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_nodeint - function that add a node at the begining of a list
 *
 * @head:the adderess of the list head
 * @n:the data
 *
 * Return:the address of the new element,or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (0);
	}
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);

}

