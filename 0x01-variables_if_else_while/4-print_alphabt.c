#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print alphabets without q and e
 * Return: (0) success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'e')
	{
	putchar(letter);
	}
	letter++;
	}
	putchar('\n');
	return (0);
}
