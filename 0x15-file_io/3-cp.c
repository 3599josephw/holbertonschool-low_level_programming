#include "main.h"
/**
 * main - the cp command
 * @argc: number of args
 * @argv: filenames
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int from, to, rd, wr, c;
	char buf1[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rd = read(from, buf1, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	wr = write(to, buf1, rd);
	if (to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to);
		exit(100);
	}
	close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		exit(100);
	}
	return (1);
}
