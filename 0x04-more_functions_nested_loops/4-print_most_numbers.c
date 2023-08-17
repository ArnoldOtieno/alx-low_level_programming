#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: returns void
 */
void print_most_numbers(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		if (!(y == '2' || y == '4'))
			_putchar(y);
	}
	_putchar('\n');
}
