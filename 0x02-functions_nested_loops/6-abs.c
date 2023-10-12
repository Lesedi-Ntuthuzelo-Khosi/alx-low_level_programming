#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: parameter to be checked
 * Return: returns the absolute value
 */
int _abs(int a)
{
	int val;

	if (a >= 0)
		val = a;
	else
		val = -a;
	return (val);
}
