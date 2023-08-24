#include "main.h"
/**
 * leet - function that encodes a string to 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: points to the string
 * Return: returns pointer to s
 */
char *leet(char *s)
{
	int stringlength, count;

	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	stringlength = 0;
	while (s[stringlength] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (letters[count] == s[stringlength])
			{
				s[stringlength] = nums[count];
			}
		count++;
		}
		stringlength++;
	}
	return (s);
}
