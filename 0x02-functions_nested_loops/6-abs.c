#include "main.h"
/**
 * _abs - program that prints absolute value of an integer
 * @c: the integer to be checked
 * Return: Absolute value of a number or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
