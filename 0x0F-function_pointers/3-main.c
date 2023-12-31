#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - check the code
 *@argc: the number of arguments passed to main
 *@argv: an array that contains all the arguments of main
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, res = 0;

	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (strcmp(argv[2], "/") == 0
			  || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	res = ptr(num1, num2);
	printf("%d\n", res);

	return (0);
}
