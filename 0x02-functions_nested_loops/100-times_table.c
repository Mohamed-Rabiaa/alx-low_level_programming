#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: The number to print the time table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, res;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				res = i * j;
				_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar('0' + res / 100);
					_putchar('0' + (res / 10) % 10);
				}
				else if (res <= 99 && res >= 10)
					_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			_putchar('\n');
		}
	}
}
