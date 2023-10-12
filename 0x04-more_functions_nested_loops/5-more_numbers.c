#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i = 0;

	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			putchar(j < 10 ? '0' : '0' + j / 10);
			putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
