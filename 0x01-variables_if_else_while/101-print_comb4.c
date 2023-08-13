#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program prints all possible different combination
 * of three numbers
 * Return: return zero for success
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			for (num3 = 50; num3 < 58; num3++)
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != 55 || num2 != 56)
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
