#include "monty.h"

/**
 * push - adds node to the start of dlinkedlist
 * @h: head of linked list (node at the bottom of stack)
 * @line_number: bytecode line number
 * @n: integer
 */
void push(stack_t **h, unsigned int line_number, const char *n)
{
	if (!h)
		return;
	if (is_number(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		free_doublist(h);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_end_node(h, atoi(n)) == -1)
		{
			free_doublist(h);
			exit(EXIT_FAILURE);
		}
	}
}

/**
 * pop - removes node at front of dlinkedlist
 * @h: head of linked list (node at the bottom of stack)
 * @line_number: bytecode line number
 */
void pop(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_doublist(h);
		exit(EXIT_FAILURE);
	}
	else
		delete_end_node(h);
}

