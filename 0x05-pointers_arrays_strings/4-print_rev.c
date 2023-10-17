#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: pointer to string that must be printed in reverse
 *
 */

void print_rev(char *s)
{
	int len;
	len = _strlen(s);

	while (len != 0)
	{
		_putchar(s[len]);
		len--;
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
	return(i);
}
