#include <stdlib.h>
/**
 *_pow - returns the res of n raised to the power of p
 *@n: the integer
 *@p: the power
 *
 *Return: the res of n raised to the power of p
 */
unsigned int _pow(int n, int p)
{
	int i;
	unsigned int res = 1;

	for (i = 0; i < p; i++)
		res *= n * n;

	return (res);
}
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: a string of 0 and 1 chars
 *
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n, r, length, power = 0;

	unsigned int res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		length++;
	}
	n = atoi(b);

	for (i = 0; i < length; i++)
	{
		if (n != 0)
		{
			r = n % 10;
			n = n / 10;
			res += r *  _pow(2, power);
			power++;
		}
	}
	return (res);
}
