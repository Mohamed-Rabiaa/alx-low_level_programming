/**
 * print_rev - prints a string, in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
		i++;

	char rs[100];

	i = i - 1;
	while (j < i)
	{
		rs[j] = s[i];
		_putchar(rs[j]);
		j++;
		i--;
	}
	_putchar('\n');
}
