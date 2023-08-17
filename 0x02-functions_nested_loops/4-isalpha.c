#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: integer to be checked
 * Return: return one for success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
