#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: content to be written onto file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int textLength, bytesWritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	} else
	{
		for (textLength = 0; text_content[textLength]; textLength++)
			;

		bytesWritten = write(fd, text_content, textLength);

		if (bytesWritten == -1)
			return (-1);

	}
	close(fd);
	return (1);
}
