/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i;

	int j = 0;

	char revS[j];

	while (s[i] != '\0')
		i++;


	for (i = i - 1; i >= 0; i--)
	{
		revS[j] = s[i];
		j++;
	}

	for (i = 0; revS[i] != '\0'; i++)
	{
		s[i] = revS[i];
	}
}
