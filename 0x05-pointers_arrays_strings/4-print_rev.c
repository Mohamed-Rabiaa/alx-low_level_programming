#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i = i - 1;
	
	while (i >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
