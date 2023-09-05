#include "main.h"
/**
 * read_textfile - reads textfile and prints it to the posix output
 *
 * @filename: name of the file
 * @letters: number of letters to be read
 *
 * Return: no of letters it could read or print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *msg;
	ssize_t bytesRead, totalBytesRead;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	msg = malloc(sizeof(char) * (letters));
	if (!msg)
		return (0);
	bytesRead = read(fd, msg, letters);
	totalBytesRead = write(STDOUT_FILENO, msg, bytesRead);

	close(fd);
	return (totalBytesRead);
}
