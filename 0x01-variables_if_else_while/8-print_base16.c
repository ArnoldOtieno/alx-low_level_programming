#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Program prints numbers of base
 * 16 in lowercase
 * Return: zero for success
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 97;
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
