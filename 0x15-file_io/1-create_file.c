#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 *create_file - creates a file.
 *@filename: the name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *
 *Return:  1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, tc_length = 0;

	ssize_t n;

	char *temp = text_content;

	if (!filename)
		return (-1);

	while (*temp)
	{
		tc_length++;

		temp++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	n = write(fd, text_content, tc_length);
	if (n == -1 || n != tc_length)
		return (-1);

	close(fd);
	return (1);
}
