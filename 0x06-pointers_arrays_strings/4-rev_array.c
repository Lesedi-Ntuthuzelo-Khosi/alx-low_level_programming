#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, count = 0;
	int j = n - 1;
	int b[100];

	for (; i < n; i++)
	{
		b[i] = a[j];
		j--;
	}

	for (; count < n; count++)
		a[count] = b[count];
}
