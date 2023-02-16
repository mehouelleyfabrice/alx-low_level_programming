#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: linked list
 * @str: string (new node)
 * Return: length
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
	}
	else
		return (NULL);
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
