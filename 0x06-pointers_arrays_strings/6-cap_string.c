/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int i;

	int j;

	char sep[] = {',', ';', '.', '!', '\?', '\"', '(', ')',
		       '{', '}', '\n', '\t', ' '};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] <= 12; j++)
		{
			if (s[i - 1] == sep[j] && s[i] >= 'a'
			    && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
