#include "main.h"
#include <stdio.h>

/**
 * print_long - prints a long number
 * print_times_table - prints the n times table starting with 0
 * @n: parameter to accept n
 * @value: value to be printed
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
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(44);
				_putchar(32);

				prod = a * b;

				if (prod <= 99)
					_putchar(32);
				if (prod <= 9)
					_putchar(32);

				if (prod == 0)
					_putchar('0' + prod);
				else
					print_long(prod);
				if (b == n)
					continue;
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
