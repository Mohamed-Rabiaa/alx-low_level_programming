#include "main.h"
/**
 *print_alphabet_x10 - Prints the alphabet in lower case 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	char c = 'a';

	while (i < 10)
	{
		while (c < 'z')
		{
		_putchar(c);
		c++;
		}
		i++;
	}
	_putchar('\n');
}
