#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10)
		{
			_putchar('0' + n);
		}
		else
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
