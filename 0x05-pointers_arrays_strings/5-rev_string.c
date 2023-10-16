/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	char temp;

	while (s[i] != '\0')
		i++;


	for (i = i - 1; i >= j; i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
	}
}
