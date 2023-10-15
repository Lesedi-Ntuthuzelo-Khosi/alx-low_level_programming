#include "main.h"
#include <stdio.h>

/**
 * print_long - prints a long number
 * @value: number tp be printed
 *
 * print_times_table - prints the n times table starting with 0
 * @n: parameter to accept n
 *
 * Return: does not return anything
 */
void print_long(long value);

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a, b, prod;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				prod = a * b;
				if (prod == 0)
					_putchar('0' + prod);
				else
					print_long(prod);
				if (b == n)
					continue;
				_putchar(44);
				_putchar(32);
			}
		_putchar('\n');
		}
	}
}
void print_long(long value)
{
	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}
