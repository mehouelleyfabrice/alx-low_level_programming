#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t int
 * @h: list
 * Return: Number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
