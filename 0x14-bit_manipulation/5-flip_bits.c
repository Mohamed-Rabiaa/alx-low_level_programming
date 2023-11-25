/**
 *flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *@n: the first number
 *@m: the second number
 *
 *Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int exclusive = n ^ m;

	unsigned long int current;

	int i;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;

		if (current & 1)
			count++;
	}
	return (count);
}
