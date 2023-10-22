#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to buffer to be copied to.
 * @src: pointer to string to be copied
 * @n: maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
