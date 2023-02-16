#include "monty.h"

/**
 * get_op_func - function to select correct operation function
 * @token: opcode (The operation code, It could be push, pall, ...)
 * Return: pointer to correct operation function
 */
void (*get_op_func(char *token))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"push", push},
		{"pop", pop},
		{"pall", pall},
		{NULL, NULL}
	};
	int i = 0;

	while (instruction_s[i].f != NULL)
	{
		if (strcmp(token, instruction_s[i].opcode) == 0)
			return (instruction_s[i].f);
		i++;
	}
	return (NULL);
}
