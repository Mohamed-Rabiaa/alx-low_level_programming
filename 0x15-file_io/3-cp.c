#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - check the code
 *@argc: the number of arguments passed to main
 *@argv: an array that contains all the arguments of main
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count = argc;

	char **arr = argv;

	if (argc < 3)
	{
		exit(97);
		dprintf("Usage: cp file_from file_to\n");
	}
	printf("%d %s", count, arr[1]);
	return (0);
}
