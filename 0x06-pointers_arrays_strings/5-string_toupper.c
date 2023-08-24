#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * @x: string to be converted
 * Return: pointer to the uppercase letters
 */
char *string_toupper(char *x)
{
	int stringlength;

	stringlength = 0;
	while (x[stringlength] != '\0')
	{
		if (x[stringlength] >= 97 && x[stringlength] <= 122)
		{
			x[stringlength] = x[stringlength] - 32;
		}
		stringlength++;
	}
	return (x);
}
