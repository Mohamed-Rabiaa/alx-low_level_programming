#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: The number to print the time table
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		_putchar('\n');
	else
	{

		int i = 0;

		int j;

		int res = 0;

		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				res = i * j;

				if (res < 10 && j != n)
				{
					_putchar('0' , res);
					_putchar(',');
					_putchar(' ');
				}
				else if (res > 10 && j != n)
				{
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
					_putchar(',');
				}
				_putchar(' ');
				_putchar(' ');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
