#include <stdio.h>

int x;

int main()
{
	int i;
	x = 20;
	for (i = 0; i < x; i++)
		printf("%d %d\n", i, x--);

	printf("Done-0\n");
	printf("Done-0a\n");
	printf("Done-1\n");
	printf("Done-1\n");
	printf("Dona-1b\n");
	return 0;
}

