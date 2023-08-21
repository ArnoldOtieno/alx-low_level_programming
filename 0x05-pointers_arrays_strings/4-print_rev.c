#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be passed
 * Return: return zero
 */
void print_rev(char *s)
{
	int first = 0;

	while (s[first])
		first++;
	while (first--)
		_putchar(s[first]);
	_putchar('\n');
}
