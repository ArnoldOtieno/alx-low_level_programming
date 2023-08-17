#include "main.h"
/**
 * print_last_digit - Program prints last digit of a number
 * @d: The number to be checked
 * Return: Return value of last digit of a number
 */
int print_last_digit(int d)
{
	int lastDgt;

	lastDgt = d % 10;
	if (lastDgt < 0)
	{
		lastDgt = lastDgt * -1;
	}
	_putchar(lastDgt + '0');
	return (lastDgt);
}
