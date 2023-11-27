#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: the name of the file to read and write to stdout
 *@letters:  the number of letters it should read and print
 *
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_write;

	int fd;

	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));

	if (!buffer)
	{
		free(buffer);
		return (-1);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
		return (0);


	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_read != n_write)
		return (0);

	free(buffer);

	close(fd);
	return (n_write);
}
