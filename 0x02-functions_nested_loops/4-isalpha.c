#include "main.h"
/**
 * _isalpha - Checks if the character is alphabet
 *@c: the character to be checked
 *
 * Return: 1 if the character is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	char ch = 'A';

	int isAlpha = 0;

	while (ch <= 'z')
	{
		if (c == ch && ch != '[' && ch != '\\' && ch != ']' && ch != '^'
			ch != '_' && ch != '`')
		{
			return (isAlpha = 1);
		}
		else
		{
			isAlpha = 0;
		}
		ch++;
	}
	return (isAlpha);
}
