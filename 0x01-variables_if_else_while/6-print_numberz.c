#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	char c;

	while (n < 10)
	{
		c = '0' + n;
		putchar(c);
		n++;
	}
	putchar('\n');
	return (0);
}
