#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints alphabets in lower case
 * Return: zero for success
 */
void print_alphabet(void)
{
	char alpbt;

	for (alpbt = 'a'; alpbt <= 'z'; alpbt++)
	{
		putchar(alpbt);
	}
	putchar('\n');
}
