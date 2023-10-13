#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: parameter to be evaluted
*
* Return: returns value of the last digit
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		int b = n * (-1);

		last_digit = b % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);

	return (last_digit);
}
