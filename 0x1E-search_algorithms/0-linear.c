#include "search_algos.h"
/**
 * linear_search - program that searches for an
 * array element using linear search
 * @array: array to be searched from
 * @size: size of the array
 * @value: the value to be searched from the array
 *
 * Return: returns the first index where the element
 * is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			break;
		}
		i++;
	}
	if (i == size)
	{
		return (-1);
	}
	return (i);
}
