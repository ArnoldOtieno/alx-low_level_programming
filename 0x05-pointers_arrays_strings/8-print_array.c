#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * of integers
 * @a: Array of the input
 * @n: This is the lenghth of the array
 */
void print_array(int *a, int n)
{
	int array_index;

	for (array_index = 0; array_index < n; array_index++)
	{
		printf("%d", a[array_index]);
		if (array_index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
