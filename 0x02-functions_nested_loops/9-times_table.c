#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0;

	int j;

	int res = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = i * j;
			_putchar((res < 10 ? '0' : '0' + res / 10));
			_putchar('0' + res % 10);
			if (j < 9)
			{
				_puthcar(',');
				_putchar(' ');
				_putchar(' ');
				j++;
			}
		}
		putchar('\n');
		i++;
	}
}
