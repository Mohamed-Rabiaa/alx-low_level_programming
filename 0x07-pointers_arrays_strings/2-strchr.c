/**
*_strchr - locates a character in a string
*@s: the string
*@c: the character to be located
*
*Return:  a pointer to the first occurrence of the character c in the string s,
*or NULL if the character is not found
*/
char _tolower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}
char *_strchr(char *s, char c)
{
	int i;

	c = _tolower(c);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == _tolower(s[i]))
			return (s + i);
	}
	return (0);
}
