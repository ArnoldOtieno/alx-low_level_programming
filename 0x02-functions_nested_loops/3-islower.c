#include "main.h"
/**
 * _islower - program checks for lowercase character
 * @c: integer to be checked
 * Return: return 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
