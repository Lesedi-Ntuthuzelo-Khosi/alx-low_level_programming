#include "main.h"

/**
 * rev_string: reverses a string
 *@s: string to be reversed
 *
 */
void rev_string(char *s)
{
	int len = _strlen(s);
/*	int width = len;  */
	char holder[892];
	int i = 0, g = len - 1;

	while( i < len)
	{
		holder[i] = s[g];
		g--;
		i++;
	}

	i = 0;
	while(i < len)
	{
		s[i] = holder[i];
		i++;
	}
}

/**
 * _strlen - calculates the length of the string
 * @s: string 
 *
 * Return: returns the length of the strings
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
