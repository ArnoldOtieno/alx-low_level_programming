#include <stdlib.h>
#include "main.h"
/**
 * _memoryset - function that fills memory with constant byte
 * @k: the memory area to be filled
 * @q: character to be copied into function
 * @n: specifies the number of times to copy
 * Return: returns pointer to memory area s
 */
char *_memoryset(char *k, char q, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		k[i] = q;
	}
	return (k);
}

/**
 * _calloc - function that allocates memory for array
 * @nmemb: total elements in array
 * @size: sze of each element of the array
 * Return: returns pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memoryset(p, 0, nmemb * size);
	return (p);
}
