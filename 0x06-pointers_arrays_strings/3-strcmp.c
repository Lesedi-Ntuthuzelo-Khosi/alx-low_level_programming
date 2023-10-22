#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: A value: negative(if s1 < s2)
 * 		    positive(if s1 > s2) else 0
 */
int _strcmp(char *s1, char *s2)
{
	int i =0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
