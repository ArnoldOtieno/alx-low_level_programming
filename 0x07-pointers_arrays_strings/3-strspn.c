#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to search from
 * @accept: prefix to measure
 * Return: number of bytes in s
 * which cosist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int  byt = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byt++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (byt);
		}
		s++;
	}
	return (byt);
}
