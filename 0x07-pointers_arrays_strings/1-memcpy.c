#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @src: Memory area to be copied from
 * @dest: memory area to be copied to
 * @n: number of times to copy
 * Return: return a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
	dest[j] = src[j];
	j++;
	}
	return (dest);

}
