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
				c = 'a';
			else if (n == 11)
				c = 'b';
			else if (n == 12)
				c = 'c';
			else if (n == 13)
				c = 'd';
			else if (n == 14)
				c = 'e';
			else if (n == 15)
				c = 'f';
		}
		putchar(c);
		n++;
	}
	putchar('\n');
	return (0);
}
