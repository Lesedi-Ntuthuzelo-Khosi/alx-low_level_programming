#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: pointer to string that must be printed in reverse
 *
 */

void print_rev(char *s)
{
	int len, i, g;

	len = _strlen(s);
	i = 0;
	g = len - 1;
	while (i != len)
	{
		_putchar(s[g]);
		g--;
		i++;
	}
	_putchar('\n');
}

/**
* _strlen - calculates length of the string
* @s: pointer to string
*
* Return: Length of String
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
