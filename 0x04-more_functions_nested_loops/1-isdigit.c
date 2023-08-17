#define "main.h"
/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: The character being checked
 * Return: returns 1 for digit and 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
