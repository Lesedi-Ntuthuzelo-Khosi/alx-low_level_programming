#include <stdio.h>

/**
* main - Entry point
*
* Return: Success(0)
*/
int main(void)
{
	int num = 0;
	char letter;

	for (; num <=9 ; num++)
		putchar('0' + num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
