#include <stdio.h>

int x;

int main()
{
	int i;
	x = 10;
	for (i = 0; i < x; i++)
		printf("%d %d\n", i, x--);

	printf("Done\n");
	return 0;
}

