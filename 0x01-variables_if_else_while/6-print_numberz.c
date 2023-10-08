#include <stdio.h>

/**
* main - Entry Point
*
* Return: 0 (Succes)
*/
int main(void)
{
	int a = 0;

	for (; a <= 9; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
