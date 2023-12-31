#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds sum of integers
 * @n: integers passed to the function
 * Return: returns the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
