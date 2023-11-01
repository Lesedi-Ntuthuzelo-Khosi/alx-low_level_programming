#include "main.h"

/**
 *_strncat - receives a two strings that it concatenates
 *@dest: string to be concatenated
 *@src: string to be concatenated
 *@n: n bytes to be used from src
 *
 *Return: returns a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
		if (i == n)
		{
			break;
		}
	}
	return (dest);
}
