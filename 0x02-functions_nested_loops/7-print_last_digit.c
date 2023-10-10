#include "main.h"
/**
 * print_last_digit - Prints the last digit of the given integer
 * @n: the integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = 0;

	lastDigit = n % 10;

	if (lastDigit > 0)
		_putchar('0' + lastDigit);

	else
		_putchar('0' + -lastDigit);

	return (lastDigit);
}
