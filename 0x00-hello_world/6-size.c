#include <stdio.h>
/**
 * main - program prints size of c data types
 * Return: zero for success
 */
int main(void)
{
	char z;
	int q;
	long int y;
	long long int w;
	float x;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));
	return (0);
}
