#include <stdio.h>

/**
* main - Entry Point
*
* Return: 0 (Succes)
*/
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	for (; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (; ALPHABET <= 'Z'; ALPHABET++)
		putchar(ALPHABET);
	putchar('\n');
	return (0);
}
