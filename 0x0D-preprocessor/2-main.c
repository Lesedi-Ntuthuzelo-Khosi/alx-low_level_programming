#include <stdio.h>
#include "main.h"

/**
 * main -  prints the name of the file it was compiled from,
 *		followed by a new line.
 *
 * Return: 0 always(success)
 */
int main(void)
{
	char *s = __FILE__;

	printf("%s\n", s);
	return (0);
}
