/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string in lowercase
 *
 * Retrun: the string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0' && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
