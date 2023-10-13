#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: parameter to be checked.
 *
 * Return: returns 1 if c is uppercase and returns 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
