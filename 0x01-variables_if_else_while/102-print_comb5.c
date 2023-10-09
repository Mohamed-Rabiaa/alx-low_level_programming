#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 0;

	int n2;

	while (n1 < 100)
	{
		n2 = n1 + 1;

		while (n2 < 100)
		{
			if (n1 < 10)
				putchar('0');
			putchar(n1);
			putchar(' ');
			if (n2 < 10)
				putchar('0');
			putchar(n2);
			if (n1 < 99)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
