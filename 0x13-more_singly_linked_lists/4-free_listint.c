#include"lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * free_listint - a function that frees a list
 *
 * @head:the pointer that contianing the first list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}

}
