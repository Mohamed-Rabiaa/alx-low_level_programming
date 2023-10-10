#include "main.h"
/**
 * _islower - Checks for lowercase character
 *
 * @c: The character to check
 *
 * Return: 1 if c is in lowercae, 0 otherwise
 */
int _islower(int c)
{
	char ch = 'a';

	int isLower = 0;

	while (ch <= 'z')
	{
		if (c == ch)
		{
			isLower = 1;
			return (isLower);
		}
		else
		{
			isLower = 0;
		}
		ch++;
	}
	return (isLower);
}
