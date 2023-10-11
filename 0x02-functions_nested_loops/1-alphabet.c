#include "main.h"

/**
 * print_alphabet - prints alphabets a-z in lowercase
 *
 *Return: has no return value. it just perints
 */
void print_alphabet(void)
{
	char alpha = a;

	for (; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
