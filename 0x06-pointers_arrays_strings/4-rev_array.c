/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements inside the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int j = n - 1;

	int temp;

	while (i < n)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j--;
		i++;
	}
}
