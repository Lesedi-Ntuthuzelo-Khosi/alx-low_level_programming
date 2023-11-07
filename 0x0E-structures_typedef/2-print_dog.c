#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints elements of a struct dog
 * @d: pointer to structure
 *
 */
void print_dog(struct dog *d)
{
	char *name = (*d).name;
	char *owner = (*d).owner;
	float age = (*d).age;

	if (name == NULL)
		printf("Name: (Nil) \n");
	else
		printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	if (owner == NULL)
		printf("Owner: (Nil) \n");
	else
		printf("Owner: %s\n", owner);
}
