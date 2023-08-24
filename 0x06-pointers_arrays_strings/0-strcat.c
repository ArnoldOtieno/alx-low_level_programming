#include "main.h"
/**
 * *_strcat - appends te src string to dest string
 * @dest: string pointer for the destination
 * @src: string pointer to the source
 * Return: returns pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int string_length, y;
	string_length = 0;

	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (y = 0; src[y] != '\0'; y++, string_length++)
	{
		dest[string_length] = src[y];
	}
	dest[string_length] = '\0';
	return (dest);
}
