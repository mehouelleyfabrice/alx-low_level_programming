#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->next = NULL;
	new->prev = tmp;
	tmp->next = new->next;
	return (new);
}
