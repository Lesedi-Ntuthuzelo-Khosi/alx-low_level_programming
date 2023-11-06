#include "main.h"

int _putchar(char c);
/**
 * main -  prints the name of the file it was compiled from,
 *		followed by a new line.
 *
 * Return: 0 always(success)
 */
int main(void)
{
	char *s = __FILE__;

	_putchar(s[3]);
	return (0);
}
