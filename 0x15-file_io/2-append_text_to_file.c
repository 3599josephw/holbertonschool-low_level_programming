#include "main.h"
/**
 * append_text_to_file - appends text to end of a file
 * @filename: the file to be appended to
 * @text_content: text to put in the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j, len;

	if (filename == NULL)
		return (-1);

	len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}

	j = write(fd, text_content, len);

	if (j == -1)
		return (-1);

	return (1);
}
