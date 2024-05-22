#include "search_algos.h"
/**
 * binary_search - searches for an element in an array
 *
 * @size: size of the array to search from
 * @array: pointer to the array to search an element from
 * @value: the array element to search
 *
 * Return: returns the index of the element or -1
 * if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, i, mid, low;

	if (array == NULL)
	{
		return (-1);
	}
	mid = 0;
	high = size - 1;
	low = 0;
	i = 0;
	while (high >= low)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
