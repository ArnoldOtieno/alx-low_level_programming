#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of
 * characters and initializes it with another character
 * @size: determines the array size
 * @c: The character to be initialized
 * Return: returns null if size is zero or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pstrings;
	unsigned int i;

	pstrings = malloc(sizeof(char) * size);
	if (size == 0 || pstrings == NULL)
		return  (NULL);
	for (i = 0; i < size; i++)
		pstrings[i] = c;
	return (pstrings);
}
