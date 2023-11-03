#include <stdio.h>

/**
 * main - is program that prints its name, followed by a new line.
 * @argc: counts the number of parameters passed to main
 * @argv: is an array of strings that are passed to main
 *
 * Return: (0) o indicate succesful execution
 */
int main(int argc, char *argv[])
{
	char *s __attribute__((unused)) = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
