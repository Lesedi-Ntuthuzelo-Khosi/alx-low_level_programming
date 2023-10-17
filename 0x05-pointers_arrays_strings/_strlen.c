#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates length of the string
 * @s: pointer to string for which length must be determined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (i > 18)
			break;
	}
	return (i);
}
