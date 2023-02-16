#include "monty.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - Entry into interpreter
 * @argc: argv length
 * @argv: arguments
 * Return: 0 on success, EXIT_FAILURE (1) on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	unsigned int line = 1;
	char *buffer, *token;
	ssize_t n_read;
	stack_t *h = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buffer = malloc(sizeof(char) * 10000);
	if (!buffer)
		return (0);
	n_read = read(fd, buffer, 10000);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		exit(EXIT_FAILURE);
	}
	token = strtok(buffer, "\n\t\v\r");
	while (token != NULL)
	{
		if (get_op_func(token) != NULL)
		{
			get_op_func(token)(&h, line);
		}
		else
		{
			free_doublist(&h);
			printf("L%d: unknown instruction %s\n", line, token);
			exit(EXIT_FAILURE);
		}
		line++;
		token = strtok(NULL, "\n\t\v\r");
	}
	free_doublist(&h);
	free(buffer);
	close(fd);
	return (0);
}
