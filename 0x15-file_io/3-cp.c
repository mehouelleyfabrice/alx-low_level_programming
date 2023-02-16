#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: Number of arguments, should be 3
 * @argv: Vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char content[BUFSIZ];
	int fd_from, fd_to, close_ffrom, close_fto, nb_chars;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((nb_chars = read(fd_from, content, BUFSIZ)) > 0)
	{
		if (nb_chars != write(fd_to, content, nb_chars) || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			close(fd_to);
			exit(99);
		}
	}
	if (nb_chars < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fto = close(fd_to);
	close_ffrom = close(fd_from);
	if (close_fto < 0 || close_ffrom < 0)
	{
		if (close_fto < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		if (close_ffrom < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
