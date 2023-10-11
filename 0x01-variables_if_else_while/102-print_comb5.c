#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers(0-99)
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar('0' + a);
			putchar(32);
			putchar((b / 10) + '0');
			putchar('0' + b);

			if (a == 98 && b == 99)
				continue;

			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
