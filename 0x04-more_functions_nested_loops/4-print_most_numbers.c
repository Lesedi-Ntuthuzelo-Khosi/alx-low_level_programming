#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0-9 excluding numbers for 2 and 4.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			_putchar('0' + a);
	}
	_putchar('\n');
}
