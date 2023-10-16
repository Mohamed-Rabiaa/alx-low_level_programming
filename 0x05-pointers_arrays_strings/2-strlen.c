/**
 * _strlen - returns the length of a string
 * @s: points to the char array that holds the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	for (int i = 0; s[i] != '\0'; i++)
		length++;

	return (length + 1);
}
