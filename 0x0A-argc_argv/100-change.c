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
	int i, cents, coinsnumber = 0;

	int coinstype[] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
			coinsnumber = 0;
		else
		{
			for (i = 0; i < 5; i++)
			{
				coinsnumber += cents / coinstype[i];
				cents = cents % coinstype[i];
				if (cents % coinstype[i] == 0)
					break;
			}
		}
		printf("%d\n", coinsnumber);
	}
	return (0);
}
