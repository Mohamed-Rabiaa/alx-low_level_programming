#include "main.h"

/**
 * _isupper - Checks if the given character is upper
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char ch = 'A';

	while (ch <= 'Z')
	{
		if (c == ch)
		{
			return (1);
		}
		ch++;
	}
	return (0);
}
