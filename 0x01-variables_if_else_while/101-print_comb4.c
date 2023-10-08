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

	int n3 = 2;

	while (n1 < 8)
	{
		while (n2 < 9)
		{
			while (n3 < 10)
			{
				putchar('0' + n1);
				putchar('0' + n2);
				putchar('0' + n3);

				if (n1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
		}
		n1++;
		n2++;
		n3 = n2 + 1;
	}
	putchar('\n');
	return (0);
}
