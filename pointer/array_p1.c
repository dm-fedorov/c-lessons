#include <stdio.h>

#define N 6

int main(void)
{
	int a[N] = {5, 7, 8, 9, 3, 2};
	int *ap;

	ap=&a[0];

	int i;
	for (i=0; i<N; i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");

	*ap=90;

	for (i=0; i<N; i++){
		printf("%d ",a[i]);
	}

	return 0;
}
