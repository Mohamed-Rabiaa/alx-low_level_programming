#include <stdio.h>
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
	int product = 0;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);

		printf("%d", product);
	}
	return (0);
}
