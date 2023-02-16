#include "main.h"

/**
 * _strlen - find length of string
 * @str: the string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{}
	return (len);
}

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to put in the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n_wrote, len, fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
