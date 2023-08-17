#include "main.h"
/**
 * print_numbers - program prints numbers from 0 to 9
 * Return: returns zero
 */
void print_numbers(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
		_putchar(z);
	}
	_putchar('\n');
}
