#include"lists.h"
#include<stdio.h>

/**
 * *add_node_end - a function that adds a new node at
 * the beginning of a list_t list.
 *
 * @head:the pointer that contianing the first list
 * @str:the string to be added in the node
 *
 * Return:the address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *ptr;

	new = malloc(sizeof(list_t));


	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (*head);
}
