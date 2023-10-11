#include <stdio.h>

/**
* main - Entry point
*
* Return: Success(0)
*/
int main(void)
{
	int a = 0;
	int count;

	for (; a < 9; a++)
	{
		for (count = a + 1; count < 10; count++)
		{
			putchar('0' + a);
			putchar('0' + count);

			if (a == 8 && count == 9)
				continue;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
