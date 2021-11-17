#include "main.h"
/**
 * read_textfile - reads a text file and pritns to standard output
 * @filename: the file to be read
 * @letters: how many letters should be read
 * Return: actual number o fletters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, rd, wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);

	if (buf == NULL)
		return ('\0');

	rd = read(fd, buf, letters);

	wr = write(1, buf, rd);

	if (wr == -1)
		return (0);
	free(buf);

	close(fd);


	return (wr);
}
