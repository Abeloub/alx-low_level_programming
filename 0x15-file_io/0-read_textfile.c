#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters it could read and print
 * or 0 if:
 * - the file can not be opened or read,
 * - filename is NULL,
 * - write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_rd;
	ssize_t bytes_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_rd = read(file_descriptor, buffer, letters);

	if (bytes_rd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);
	if (bytes_wr == -1 || bytes_rd != bytes_wr)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_wr);
}
