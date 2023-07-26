/**
 * reverse_array - reverses the elements of an array
 * @a: char a
 * @n: int n
 *
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
