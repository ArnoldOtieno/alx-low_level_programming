#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: always zero
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *b;
	*b = *a;
	*a = swap;
}
