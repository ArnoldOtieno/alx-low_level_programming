#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: string pointer to the destination
 * @src: string pointer to the source
 * @n: total number of bytes to be concateneted
 * Return: returns pouinter to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int string_length, y;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++, string_length++)
	{
		dest[string_length] = src[y];
	}
	dest[string_length] = '\0';
	return (dest);
}
