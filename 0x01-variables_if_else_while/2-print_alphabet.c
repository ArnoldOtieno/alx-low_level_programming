#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The program prints alphabets
 * Return: zero for success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char firstChar = 'a';

	while (firstChar <= 'z')
	{
	putchar(firstChar);
	firstChar++;
	}
	putchar('\n');
	return (0);
}
