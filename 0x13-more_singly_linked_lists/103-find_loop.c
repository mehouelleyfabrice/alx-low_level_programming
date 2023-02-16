#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: Address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	slow = head;
	fast = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow->n == fast->n)
		{
			return (fast);
		}
	}
	return (NULL);
}
