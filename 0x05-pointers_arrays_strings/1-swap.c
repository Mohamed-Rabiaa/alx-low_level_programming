/**
 * swap_int - swaps the values of two integers
 * @a: points to a
 * @b: points to b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
