/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[] = {',', ';', '.', '!', '\?', '\"', '(', ')',
		       '{', '}', '\n', '\t', ' '};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && s[i + 1] >= 'a'
			    && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
