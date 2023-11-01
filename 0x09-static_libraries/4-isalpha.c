#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: parameter to be tested
 *
 * Return: 1 if letter, 0 if not a letter
 */
int _isalpha(int c)
{
	int val;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		val = 1;
	else
		val = 0;
	return (val);
}
