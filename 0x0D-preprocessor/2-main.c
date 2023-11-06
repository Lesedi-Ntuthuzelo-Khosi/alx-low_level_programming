#include <stdio.h>
#include "main.h"

/**
 * main -  prints the name of the file it was compiled from,
 *		followed by a new line.
 */
int main(void)
{
	char *s = __BASE_FILE__;

	printf("%s\n", s);
	return (0);
}
