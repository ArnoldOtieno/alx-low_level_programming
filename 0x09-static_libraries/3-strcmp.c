#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: returns zero
 */
int _strcmp(char *s1, char *s2)
{
	int mycount, valuecompare;

	mycount = 0;
	while (s1[mycount] == s2[mycount] && s1[mycount] != '\0')
	{
		mycount++;
	}
	valuecompare = s1[mycount] - s2[mycount];
	return (valuecompare);
}
