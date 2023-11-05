#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 *	make change for an amount of money.
 * @argc: parameter counter
 * @argv: array of strings
 *
 * Return: 0 if succesful or 1
 *	if argc != 2
 */
int main(int argc, char *argv[])
{
	int c = 0, d = 0, e = 0, a = 0, b = 0, sum = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (cents != 0)
	{
		if (cents >= 25)
		{
			a = cents / 25;
			cents = cents - (a * 25);
		}
		else if (cents >= 10 && cents < 25)
		{
			b = cents / 10;
			cents = cents - (b * 10);
		}
		else if (cents >= 5 && cents < 10)
		{
			c = cents / 5;
			cents = cents - (c * 5);
		}
		else if (cents >= 2 && cents < 5)
		{
			d = cents / 2;
			cents = cents - (d * 2);
		}
		else if (cents >= 1 && cents < 2)
		{
			e = cents / 1;
			cents = cents - (e * 1);
		}
		else if (cents < 0)
		{
			cents = 0;
		}

	}
	sum = a + b + c + d + e;
	printf("%d\n", sum);
	return (0);
}
