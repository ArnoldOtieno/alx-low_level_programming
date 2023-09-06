#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of
 * my program
 * @ac: integer input
 * @av: double pointer array
 * Return: returns zero
 */
char *argstostr(int ac, char **av)
{
	int j, k, s = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			m++;
	}
	j += ac;
	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			str[s] = av[j][k];
			s++;
		}
	if (str[s] == '\0')
	{
		str[s++] = '\0';
	}
	}
	return (str);
}
