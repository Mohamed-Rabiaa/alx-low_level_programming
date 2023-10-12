#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the number to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i = 0;

	while (i < 10)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
