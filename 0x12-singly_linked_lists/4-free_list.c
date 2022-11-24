#include"lists.h"
#include<stdio.h>

/**
 * free_list - a function that frees a list
 *
 * @head:the pointer that contianing the first list
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}

}
