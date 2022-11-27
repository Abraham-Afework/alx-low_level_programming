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

	while (head != NULL)
	{
		current = head;
		free(head);
		head = current->next;
	}

}
