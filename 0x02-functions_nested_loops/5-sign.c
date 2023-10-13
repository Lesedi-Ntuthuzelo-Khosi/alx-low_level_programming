#include "main.h"

/**
*print_sign - prints the sign of a number.
*@n: parameter to be tested
*
*Return: returns 1 if positive, -1 if negative and 0 if zero
*/
int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0' + 0);
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}
