/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: -15 if  the first not-matching character in s1
 * has a lesser ASCII value than the corresponding character in s2,
 * 15 if  first not-matching character in s1 has a greater ASCII value
 * than the corresponding character in s2,
 * 0 if all of the characters in both strings are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int n;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			n = 0;
		else if (s1[i] < s2[i])
		{
			n = -15;
			break;
		}
		else
		{
			n = 15;
			break;
		}
		i++;
	}
	return (n);
}
