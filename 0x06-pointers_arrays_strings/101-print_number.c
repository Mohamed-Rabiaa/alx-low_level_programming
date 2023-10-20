#include <limits.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer
 */
void print_number(int n)
{
	int r = 0;

	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
		_putchar('0');
	else
	{
		while (num > 0)
		{
			r = (num % 10) + (r * 10);
			num = num / 10;
		}
		while (r > 0)
		{
			_putchar((r % 10) + '0');
			r = r / 10;
		}
	}
}
