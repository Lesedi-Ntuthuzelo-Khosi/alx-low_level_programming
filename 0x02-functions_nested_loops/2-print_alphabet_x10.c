#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char alpha = 'a';

	for (; a <= 9; a++)
	{
		for (; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
