#include "main.h"

/**
 * _isdigit - Checks for if c is a digit.
 * @c: parameter to be tested.
 *
 * Return: returns 1 if the number is a digit, returns 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
