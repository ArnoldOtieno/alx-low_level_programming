#include "main.h"
/**
 * *_memset - function fills n bytes of memory
 * area pointed by s with constant byte b
 * @s: pointer to the memory
 * @b: character to copy
 * @n: number of times to copy b
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
