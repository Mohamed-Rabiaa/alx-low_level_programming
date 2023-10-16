/**
 * _strlen - returns the length of a string
 * @s: points to the char array that holds the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i + 1);
}
