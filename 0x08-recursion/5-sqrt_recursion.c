#include "main.h"

int sup_sqrt(int a, int root);

/**
 * _sqrt_recursion - Returns a square root of a n
 * @n: parameter 
 *
 * Return: If n has a natural square root - the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sup_sqrt(n, root));
}

/**
 * sup_sqrt - Finds the natural square root of an inputted number.
 * @a: The number to find the square root of.
 * @root: test values starting at 0
 *
 * Return: If the number has a natural square root - the square root.If the number does not have a natural square root - -1.
 */
int sup_sqrt(int a, int root)
{
	if ((root * root) == a)
		return (root);
	if ((root * root) > a)
		return (-1);
	return (sup_sqrt(a, root + 1));
}
