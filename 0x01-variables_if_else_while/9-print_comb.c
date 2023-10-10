#include <stdio.h>

/**
* main - Entry point
*
* Return: Success(0)
*/
int main(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		putchar('0' + a);
		if (a != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
