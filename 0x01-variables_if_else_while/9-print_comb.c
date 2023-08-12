#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints combination of single
 * digit unit numbers
 * Return: zero for success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
