#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The  program prints 1 to 9
 * using ascii
 * Return: return 0 for success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
