#include <stdio.h>
#include "main.h"
#include <unistd.h>

int main(void)
{
	char s[10] = "My School";
	printf("Name is: %s\n", s);

	rev_string(s);

	printf("Name is: %s\n", s);

	return (0);
}

void rev_string(char *s)
{
	int len = _strlen(s);
	int width = len;
#define WIDTH len
	char holder[WIDTH];
	int i = 0, g = len - 1;
	printf("String length: %d\n", width);
	while( i < len)
	{
		holder[i] = s[g];
		g--;
		i++;
	}

	i = 0;
	while(i < len)
	{
		s[i] = holder[i];
		i++;
	}
}

int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
