#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to newly allocated space
 * in memory
 * @str: pointer to newly allocated space
 * Return: returns null if str is null
 */
char *_strdup(char *str)
{
	char *mstr;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	mstr = malloc(sizeof(char) * (j + 1));
	if (mstr == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		mstr[k] = str[k];
	return (mstr);
}
