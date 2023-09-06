#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed to the
 * program
 * @argc: counts the number of arguments passsed to the program
 * @argv: contains array of the arguments
 * Return: returns zero on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
