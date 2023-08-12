#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The program prints alphabets
 * in lowercase without e and q
 * Return: return zero on success
*/
int main(void)
{
	char alpbt[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
	putchar(alpbt[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
