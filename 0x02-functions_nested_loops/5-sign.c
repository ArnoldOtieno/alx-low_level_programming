#include "main.h"
/**
 * print_sign - program prints sign of a number
 *
 * @n: The integer to be checked
 *
 * Return: return one for postive number, return negative one
 * for negative number and zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
