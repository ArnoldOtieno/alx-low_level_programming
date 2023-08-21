#include "main.h"
/**
 * _puts - prints a string
 * @str: the character to be passed
 * Return: always zero
 */
void _puts(char *str)
{
	int z = 0;

	while (str[z])
	{
		_putchar(str[z]);
				z++;
	}
	_putchar('\n');
}
