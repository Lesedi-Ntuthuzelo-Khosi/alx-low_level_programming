#include <stdio.h>

/**
 * main - is program that prints all arguments.
 *	followed by newline
 * @argc: counts the number of parameters passed to main
 * @argv: is an array of strings that are passed to main
 *
 * Return: (0) o indicate succesful execution
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
