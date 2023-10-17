#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to variable to be swapped
 * @b: pointer to variable to be swapped
 */
void swap_int(int *a, int *b)
{
	int store_a, store_b;

	store_a = *a;
	store_b = *b;

	*a = store_b;
	*b = store_a;
}
