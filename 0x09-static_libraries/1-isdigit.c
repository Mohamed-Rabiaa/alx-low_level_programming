#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the number to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	char ch  = '0';

	while (ch < 10 + '0')
	{
		if (c == ch)
		{
			return (1);
		}
		ch++;
	}
	return (0);
}
