#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);

		if (n != 98)
			printf(", ");
		else
			printf('\n');
		n++;
	}
}
