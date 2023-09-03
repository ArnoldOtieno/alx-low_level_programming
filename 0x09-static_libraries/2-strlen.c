#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 * Return: return lenth of string
 */
int _strlen(char *s)
{
	int strlength = 0;

	while (s[strlength])
		strlength++;
	return (strlength);
}
