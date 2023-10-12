#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int i = size;

	while (size > 0)
	{
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		size--;
	}
	_putchar('\n');
}
