#include "monty.h"

/**
 * pall - print all nodes in stack
 * @h: head of list
 * @line_number: bytecode line number
 */
void pall(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;
	if (!h || !*h)
		return;
	/* (void) for shut up a warning
	 * Warning: unused parameter 'line_number' [-Wunused-parameter]
	 */
	(void) line_number;
		tmp = *h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
