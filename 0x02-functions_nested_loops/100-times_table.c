#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: The number to print the time table
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, res = 0;

		int j;

		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res = i * j;
				if (res < 10)
				{
					if (j != 0)
						_putchar(' ');
					_putchar('0' + res);
				}
			 	else if (res >= 10)
				{
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
