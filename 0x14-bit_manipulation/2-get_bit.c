/**
 *get_bit - returns the value of a bit at a given index.
 *@n: the decimal number to search for the bit in
 *@index: the index of the bit
 *
 *Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int current = 0;

	current = n >> index;

	if (current & 1)
		return (1);
	else
		return (0);

	return (-1);
}
