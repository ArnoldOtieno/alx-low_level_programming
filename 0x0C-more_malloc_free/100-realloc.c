#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: points to the memory previsouly allocated by malloc
 * @old_size: variable holding size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: returns pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	old_p = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = old_p[i];
	}
	free(ptr);
	return (p);
}
