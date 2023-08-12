#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The program prints alphabets
 * in lowercase and uppercase
 * Return: return zero on success
*/
int main(void)
{
	char myChar = 'a';

	while (myChar <= 'z')
	{
	putchar(myChar);
	myChar++;
	}
	myChar = 'Z';

	while (myChar <= 'Z')
	{
	putchar(myChar);
	myChar++;
	}
	putchar('\n');
	return (0);
}
