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

	int isUpper = 0;

	while (ch < 'Z')
	{
		if (c == ch)
		{
			isUpper = 1;
		}
		else
		{
			isUpper = 0;
		}
		ch++;
	}
	return (isUpper);
}
