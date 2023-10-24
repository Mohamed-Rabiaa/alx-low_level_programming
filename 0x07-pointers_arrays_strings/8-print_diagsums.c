/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *of integers
 *@a: the square matrix
 *@size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	int n = size - 1;

	int sum1 = 0;

	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			else
			{
				sum2 += a[i][n];
				n--;
			}
		}
	}
}
