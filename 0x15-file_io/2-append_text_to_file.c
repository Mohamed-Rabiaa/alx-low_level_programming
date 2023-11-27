#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: the name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *
 *Return:  1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, tc_length = 0;

	ssize_t n;

	char *temp = text_content;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND );

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (*temp)
		{
			tc_length++;
			temp++;
		}
		n = write(fd, text_content, tc_length);
		if (n == -1 || n != tc_length)
			return (-1);
	}

	close(fd);
	return (1);
}
