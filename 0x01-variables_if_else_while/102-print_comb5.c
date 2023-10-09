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
			putchar((n1 < 10 ? '0' : '0' + n1 / 10));
			putchar('0' + n1 % 10);
			putchar(' ');
			putchar((n2 < 10 ? '0' : '0' + n2 / 10));
			putchar('0' + n2 % 10);
			if (n1 != 98 || n2 != 99)
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
