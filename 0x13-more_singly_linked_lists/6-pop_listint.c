#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * pop_listint - function  deletes the head node of a listint_t linked list
 * @head: head of the linkied list
 *
 * Return: the head node's data n or if empty return
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	pop = (*head)->next;
	free(*head);
	*head = pop;
	return (value);
}
