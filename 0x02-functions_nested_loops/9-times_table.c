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
			if (res >= 10)
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			else
			{
				if  (j != 0)
				_putchar(' ');
				_putchar('0' + res);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
