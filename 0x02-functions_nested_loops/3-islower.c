#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: parameter to be checked
 *
 * Return: Returns 1 if c is lowercase otherwise Returns 0
 */
int _islower(int c)
{
	int val;

	if (c >= 'a' && c <= 'z')
		val = 1;
	else
		val = 0;

	return (val);
}
