#include "main.h"

/**
 *_strcat - receives a two strings that it concatenates
 *@dest: string to be concatenated
 *@src: string to be concatenated
 *
 *Return: returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
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
	}
	return (dest);
}
