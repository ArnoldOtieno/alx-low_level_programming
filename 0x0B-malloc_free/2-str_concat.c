#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: cocatatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *mstring;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = k = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	mstring = malloc(sizeof(char) * (j + k + 1));
	if (mstring == NULL)
		return (NULL);
	j = k = 0;
	while (s1[j] != '\0')
	{
		mstring[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		mstring[j] = s2[k];
		j++, k++;
	}
	mstring[j] = '\0';
	return (mstring);
}
