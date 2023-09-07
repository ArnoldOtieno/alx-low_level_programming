#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memmory using malloc
 * @b: memory to be allocated in bytes
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
