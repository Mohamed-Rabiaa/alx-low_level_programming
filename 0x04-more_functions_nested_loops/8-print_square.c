#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int initialSize = size;

	int i;

	while (size > 0)
	{
		i = initialSize;

		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		size--;
	}
	_putchar('\n');
}
