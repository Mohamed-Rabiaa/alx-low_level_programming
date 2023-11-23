#include "main.h"
/**
 *print_binary - prints the binary representation of a number.
 *@n: the number to convert and print in binary
 */
void print_binary(unsigned long int n)
{
	int i;

	long int mask = 10000000;

	for (i = 0; i <= 7; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
