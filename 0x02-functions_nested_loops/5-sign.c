#include "main.h"
/**
 * print_sign - Prints the sign of the number
 * @n: the number to return the sign of
 *
 * Return: 1 if the number is positive, -1 if the number is negative,
 *0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
