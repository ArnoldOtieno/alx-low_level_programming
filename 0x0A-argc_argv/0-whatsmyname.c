#include <stdio.h>
#include "main.h"
/**
 * main -function that prints the name of the program
 * @argc: counts the arguments passed
 * @argv: contains arrays of arguments
 * Return: returns zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
