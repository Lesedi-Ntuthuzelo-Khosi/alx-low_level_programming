#include <stdio.h>

int main(void)
{
	char s = "Young man with a big heart";
	char *store;

	store = &s;

	printf("string: %s\n", s);
	printf("Store: %s", store);

	return (0);
}
