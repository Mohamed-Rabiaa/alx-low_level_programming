#include "main.h"
/**
 *_puts_recursion - prints a string
 *@s: a string
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		s = s + 1;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
