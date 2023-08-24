#include "main.h"
/**
 * reverse_array - reverses content of array of integers
 * @a: first array of integers
 * @n: second array of integers
 * Return: always zero
 */
void reverse_array(int *a, int n)
{
	int temp, mycount;

	n = n - 1;
	mycount = 0;
	while (mycount <= n)
	{
		temp = a[mycount];
		a[mycount++] = a[n];
		a[n--] = temp;
	}
}
