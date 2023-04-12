#include "main.h"

/**
 * main- print the multiplication of 2 integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successfull
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");

	return (1);

}

