#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds arguments passed, followed by a new line.
 * @argc: counts the number of parameters passed to main
 * @argv: is an array of strings that are passed to main
 *
 * Return: (0) o indicate succesful execution
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
				continue;
		else
		{
			sum = 1;
			printf("Error\n");
			break;
		}
	}
	if (sum == 0)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
