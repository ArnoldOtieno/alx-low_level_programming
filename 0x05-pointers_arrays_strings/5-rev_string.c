#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be passed to the function
 * Return: always zero
 */
void rev_string(char *s)
{
	int length, x, middle;
	char myChar;

	for (length = 0; s[length] != '\0'; length++)
		;
	x = 0;
	middle = length / 2;

	while (middle--)
	{
		myChar = s[length - x - 1];
		s[length - x - 1] = s[x];
		s[x] = myChar;
		x++;
	}
}
