#include  <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	char c;

	while (n < 16)
	{
		if (n < 10)
			c = '0' + n;
		else
		{
			if (n == 10)
				c = 'A';
			else if (n == 11)
				c = 'B';
			else if (n == 12)
				c = 'C';
			else if (n == 13)
				c = 'D';
			else if (n == 14)
				c = 'E';
			else if (n == 15)
				c = 'F';
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
