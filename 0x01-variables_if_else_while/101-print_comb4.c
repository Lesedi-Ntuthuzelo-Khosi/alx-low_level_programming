#include <stdio.h>

/**
* main - Entry point
*
* Return: Success(0)
*/
int main(void)
{
	int a = 0;
	int count, b;

	for (; a < 8; a++)
	{
		for (count = a + 1; count < 9; count++)
		{
			for (b = count + 1; b < 10; b++)
			{
				putchar('0' + a);
				putchar('0' + count);
				putchar('0' + b);

				if (a == 7 && count == 8 && b == 9)
					continue;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
