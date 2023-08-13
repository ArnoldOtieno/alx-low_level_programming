#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program prints possible combination
 * of different two strings
 * Return: returns zero for success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 49; num1 <= 57; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
