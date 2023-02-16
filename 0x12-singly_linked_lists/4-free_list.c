#include "lists.h"

/**
 * free_list - free a linked list
 * @head: linked list
 */
void free_list(list_t *head)
{		
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
