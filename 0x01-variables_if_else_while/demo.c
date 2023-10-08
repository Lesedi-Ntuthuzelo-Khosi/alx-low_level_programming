#include <stdio.h>

/**
* main - Entry Point
*
* Return: 0 (Succes)
*/
int main(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		if (ch == 'e')
			goto easy;
		else if (ch == 'q')
			goto easy;
		else
			putchar(ch);
easy:
		ch++;
	}
	putchar('\n');
	return (0);
}
