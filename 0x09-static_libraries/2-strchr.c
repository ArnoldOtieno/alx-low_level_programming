#include "main.h"
/**
 * *_strchr - locates character in a string
 * @s: pointer to the character
 * @c: Occurence of the firt character
 * Return: returns pointer to the first occurence
 * of character
 */
char *_strchr(char *s, char c)
{
	int indexchar;

	for (indexchar = 0; s[indexchar] >= '\0'; indexchar++)
	{
		if (s[indexchar] == c)
			return (s + indexchar);
	}
	return ('\0');
}
