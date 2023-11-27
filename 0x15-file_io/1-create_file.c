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
	int fb, tc_length = 0;

	ssize_t n;

	mode_t old_umask = umask(0);

	char *temp = text_content;

	if (!filename)
		return (-1);

	while (*temp)
	{
		tc_length++;

		temp++;
	}

	fb = open(filename, O_CREAT | O_RDWR | O_EXCL, 0600);

	if (fb == -1)
		return (-1);

	n = write(fb, text_content, tc_length);
	if (n == -1)
		return (-1);

	close(fb);
	umask(old_umask);

	return (1);
}
