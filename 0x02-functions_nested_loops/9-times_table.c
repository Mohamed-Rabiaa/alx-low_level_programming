#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j = 0;

	int res;

	while (i < 10)
	{
		while (j < 10)
		{
			res = i * j;
			j++;
		}
		i++;
	}
}
