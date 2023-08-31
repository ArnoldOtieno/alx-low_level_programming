#include "main.h"
/**
 * _pow_recursion - returns value of x raised
 * to power of y
 * @x: the number to be raised by power of x
 * @y: the power to raise x with
 * Return: returns power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
