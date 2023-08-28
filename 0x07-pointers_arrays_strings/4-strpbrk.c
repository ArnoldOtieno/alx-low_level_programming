#include "main.h"
/**
 * *_strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: string to search from
 * @accept: bytes to be searched for
 * Return: returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int indexchar;

	while (*s)
	{
		for (indexchar = 0; accept[indexchar]; indexchar++)
		{
			if (*s == accept[indexchar])
				return (s);
		}
		s++;
	}
	return ('\0');
}
