#include "main.h"
/**
 * puts2 - prints every character of a string starting
 * with the first character
 * @str: String to be passed
 * Return:always zero
 */
void puts2(char *str)
{
	int mystr = 0;

	while (str[mystr] != '\0')
	{
		if (mystr % 2 == 0)
		{
			_putchar(str[mystr]);
		}
		mystr++;
	}
	_putchar('\n');
}
