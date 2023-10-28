#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *is_numeric - checks of a given string is a number
 *@s: a string
 *
 *Return: 1 if the string is a number, 0 otherwise
 */
int is_numeric(char *s)
{
	while (*s != '\0')
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

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
			if (!is_numeric(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[i]);
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
