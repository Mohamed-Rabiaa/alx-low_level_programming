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
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
