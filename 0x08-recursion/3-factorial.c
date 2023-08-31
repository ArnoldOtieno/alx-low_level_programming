#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the number whose factorial is to be returned
 * Return: returns factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
