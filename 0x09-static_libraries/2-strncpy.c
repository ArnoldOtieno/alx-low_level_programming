#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to source string
 * @n: total number of bytes to be used
 * Return: returns pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num_of_bytes;


	for (num_of_bytes = 0; num_of_bytes < n && src[num_of_bytes] != '\0'; num_of_bytes++)
		dest[num_of_bytes] = src[num_of_bytes];
	for (; num_of_bytes < n; num_of_bytes++)
		dest[num_of_bytes] = '\0';
	return (dest);
}
