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
	int num __attribute__((unused)) = argc;

	printf("%s\n", argv[0]);
	return (0);
}
