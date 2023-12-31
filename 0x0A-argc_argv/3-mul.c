#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that prints multiplication
 * of two integers
 * @argc: argument count
 * @argv: array of storing the parameters
 * Return: return zero
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mul;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}

	return (0);
}
