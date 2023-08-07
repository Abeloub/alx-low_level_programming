#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 on success or exit codes on failure
 * Exit codes:
 * - 97: incorrect number of arguments
 * - 98: file_source does not exist or can not be read
 * - 99: file_dest can not be created or written to
 * - 100: can not close a file descriptor
 */

int main(int ac, char **av)
{
	int file_source, file_dest;
	char buffer[1024];
	int bytes_rd, bytes_wr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_source file_dest\n");
		exit(97);
	}

	file_source = open(av[1], O_RDONLY);
	if (file_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((bytes_rd = read(file_source, buffer, 1024)) > 0)
	{
		bytes_wr = write(file_dest, buffer, bytes_rd);
		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (bytes_rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(file_source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source), exit(100);
	if (close(file_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest), exit(100);

	return (0);
}

