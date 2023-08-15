#include "main.h"
#include <stdio.h>
/**
 * main -  program that prints _putchar, followed by a new line
 * Return: (0) success
 */
int main(void)
{
	char myChar[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(myChar[i]);
	}
	putchar('\n');
	return (0);
}
