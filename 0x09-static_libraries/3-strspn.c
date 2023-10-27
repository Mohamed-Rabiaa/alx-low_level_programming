/**
* _strspn - gets the length of a prefix substring
*@s: string
*@accept: the bytes to find in the initial segment of s
*
*Return:  the number of bytes in the initial segment of s
*which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int length = 0;

	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		length++;
	}
	return (length);
}
