#include "main.h"

int div_check(int num, int div);

/**
 * is_prime_number - Determines if a number is prime.
 * @n: parameter to be checked.
 *
 * Return: If the integer is not prime - 0 and returns -1 if the number is prime.
 */
int is_prime_number(int n)
{
	int divide = 2;

	if (n <= 1)
		return (0);

	else if (n >= 2 && n <= 3)
		return (1);

	return (div_check(n, divide));
}

/**
 * div_check - Checks if a number is divisible.
 * @num: parameter to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0. else -1
 */
int div_check(int num, int div)
{
	if (num % div == 0)
		return (0);

	else if (div == num / 2)
		return (1);

	return (div_check(num, div + 1));
}
