#include <stdio.h>

/**
* main - Entry Point
*
* Return: 0 (Succes)
*/
int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
