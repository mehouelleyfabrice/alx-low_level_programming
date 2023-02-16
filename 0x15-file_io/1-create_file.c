#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: The length of @str
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{}
	return (len);
}

/**
 * create_file - Create the file
 * @filename: The name of the file to create
 * @text_content: Content to put is the file
 *
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	n_wrote = write(fd, text_content, len);
	if (n_wrote == -1 || n_wrote != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
