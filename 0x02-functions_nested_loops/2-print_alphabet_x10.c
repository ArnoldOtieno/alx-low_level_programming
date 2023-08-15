#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabets ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alpbt;

		for (alpbt = 'a'; alpbt <= 'z'; alpbt++)
		{
			putchar(alpbt);
		}
		i++;
		putchar('\n');
	}
}
