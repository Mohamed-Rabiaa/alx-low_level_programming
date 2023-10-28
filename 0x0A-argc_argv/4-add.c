#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *@argc: the number of arguments passed to main
 *@argv: an array that contains all the arguments of main
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, num = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (strcmp(argv[i], "0") == 0)
			{
				sum += 0;
			}
			else
			{
				num = atoi(argv[i]);

				if (num > 0)
					sum += num;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
