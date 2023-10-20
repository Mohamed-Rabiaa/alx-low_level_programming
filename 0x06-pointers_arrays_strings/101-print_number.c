#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer
 */
void print_number(int n)
{
	int i;

	int r = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n >= 0)
	{
		if (n <= 9)
		{
			_putchar(n + '0');
			n = r;
		}
		else
		{
			r = (n % 10) + r;
			n = n / 10;
		}
	}
}
