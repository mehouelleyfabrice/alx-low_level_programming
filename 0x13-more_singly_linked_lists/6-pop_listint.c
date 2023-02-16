#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
	int nb = 0;
	listint_t *first_node;

	if (*head == NULL)
		return (0);
	first_node = *head;
	nb = first_node->n;
	*head = first_node->next;
	free(first_node);
	return (nb);
}
