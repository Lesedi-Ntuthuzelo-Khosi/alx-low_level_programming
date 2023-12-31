#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a = 0, b = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = a + b;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		a = b;
		b = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
