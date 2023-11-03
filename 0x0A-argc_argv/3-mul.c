#include <stdio.h>
#include <stdlib.h>

/**
 * main - is program that prints its name, followed by a new line.
 * @argc: counts the number of parameters passed to main
 * @argv: is an array of strings that are passed to main
 *
 * Return: (0) o indicate succesful execution
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
