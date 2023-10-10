#include "main.h"
/**
 *_islower - Checks for lowercase character
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
	-putchar('\n');
	return (isLower);
}
