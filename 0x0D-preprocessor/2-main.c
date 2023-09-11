#include <stdio.h>
/**
 * main - function that prints
 * name of the file it was compiled from
 *
 * Return: returns zero
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
