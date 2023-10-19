/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;

	char letters[] = "aeotl";

	int numbers[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || s[i] == (letters[j] - 32))
				s[i] = numbers[j];
		}
	}
	return (s);
}
