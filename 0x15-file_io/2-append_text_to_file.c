#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1 if the file exists
 * -1 if the fails doesn't exist or if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte;
	int num;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;

		byte = write(fd, text_content, num);

		if (byte == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
