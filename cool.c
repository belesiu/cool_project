#include <stdio.h>

int x;

int main()
{
	int i;
	x = 10;
	for (i = 0; i < x; i++)
		printf("%d %d\n", i, x--);

	printf("Done-0\n");
	printf ("Done-1\n");
	return 0;
}

