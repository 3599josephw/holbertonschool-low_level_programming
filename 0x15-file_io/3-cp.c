#include "main.h"
/**
 * main - the cp command
 * @argc: number of args
 * @argv: filenames
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int from, to, wr, c, nchars;
	char buf1[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	nchars = 1024;

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		errmsg(-1, 0, argv);
	to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		errmsg(0, -1, argv);

	while (nchars == 1024)
	{
		nchars = read(from, buf1, 1024);
		if (nchars == -1)
			errmsg(-1, 0, argv);
		wr = write(to, buf1, nchars);
		if (wr == -1)
			errmsg(0, -1, argv);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to);
		exit(100);
	}
	c = close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		exit(100);
	}
	return (0);
}
/**
 * errmsg - errors
 * @file_from: from
 * @file_to: to
 * @argv: the argument
 */
void errmsg(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
