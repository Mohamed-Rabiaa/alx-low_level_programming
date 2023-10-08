#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 0;

	int n2 = 1;

	while (n1 < 9)
	{
		while (n2 < 10)
		{
			putchar('0' + n1);
			putchar('0' + n2);
			if (n1 != 8 && n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
	putchar('\n');
	return (0);
}
