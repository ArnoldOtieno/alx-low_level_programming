#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program that prints lowercasie
 * alphabet in reverse
 * Return: returns zero for success
 */
int main(void)
{
	char myChar = 'z';

	while (myChar >= 'a')
	{
		putchar(myChar);
		myChar--;
	}
	putchar('\n');
	return (0);
}
