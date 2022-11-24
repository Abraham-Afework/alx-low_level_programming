#ifndef _LIST_H_
#define _LIST_H_

#include<stdlib.h>
#include<string.h>
/**
 * struct list_s - is a struct for linked list
 * typedef list_t
 * @str: a string
 * @len: length of the string
 * @next: pointer which contains the next list address
 *
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);


#endif
