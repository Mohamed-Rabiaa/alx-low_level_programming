#include <limits.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer
 */
void print_number(int n)
{
	int r = 0;

	if (n == INT_MIN)
	{
		_putchar('-');
		n = INT_MAX;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (n > 0)
		{
			r = (n % 10) + (r * 10);
			n = n / 10;
		}
		while (r > 0)
		{
			_putchar((r % 10) + '0');
			r = r / 10;
		}
	}
}
