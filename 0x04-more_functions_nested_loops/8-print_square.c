#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		_putchar('#');
		i++;
	}
	_putchar('\n');
}
