#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 */
void rev_string(char *s)
{
	
	int len, i, lim;

	len = _strlen(s);
	char store[len] = s;

	i=0;
	lim = len + 1;

	while (i != lim)
	{
		store[i] = s[len];
		len--;
		i++;	
	}
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
		if (i > 18)
			break;
	}
	return(i);
}
