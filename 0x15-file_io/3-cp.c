#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 *@argc: the number of arguments passed to main
 *@argv: an array that contains all the arguments of main
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, n_read, n_write, fd_read_close, fd_write_close;

	char *file_from, *file_to;

	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];

	file_to = argv[2];

	fd_read = open(file_from, O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	n_read = read(fd_read, buffer, BUFF_SIZE);
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
	n_write = dprintf(fd_write, "%s", buffer);
	if (n_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd_read_close = close(fd_read);
	if (fd_read_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}

	fd_write_close = close(fd_write);
	if (fd_write_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}

	return (0);
}
