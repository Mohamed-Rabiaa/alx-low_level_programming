#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		-putchar(' ');
		_putchar('\\');
		i++;
	}
	putchar('\n');
}
