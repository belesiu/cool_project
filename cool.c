#include <stdio.h>

int x;

int main()
{
	int i;
	x = 10;
	for (i = 0; i < x; i++)
		printf("%d %d\n", i, x--);

	printf("Done-pre\n");
	printf("Done-0\n");
	pritnf("Done-0a\n");
	printf("Done-1\n");
	printf("Dona-1b\n");
	printf("Done-2\n");
	return 0;
}

