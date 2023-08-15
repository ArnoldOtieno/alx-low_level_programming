#include "main.h"
#include <stdio.h>
/**
 * int _islower - program checks for lowercase character
 * @c: integer to be checked
 * Return: return 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
