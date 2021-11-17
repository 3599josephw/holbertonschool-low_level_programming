#include "main.h"
/**
 * read_textfile - reads a text file and pritns to standard output
 * @filename: the file to be read
 * @letters: how many letters should be read
 * Return: actual number o fletters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t *buf;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);

	if (buf == NULL)
		return ('\0');

	read(fd, buf, letters);

	write(1, buf, letters);
	close(fd);


	return (letters);
}
