#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: text to put in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, j;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	j = write(fd, text_content, strlen(text_content));

	if (j == -1)
		return (-1);

	return (1);
}
