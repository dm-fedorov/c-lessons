#include <stdio.h>

void test(int *, int *);

int main(void)
{
	int x=0,y=1;

	printf("value x: %d\n", x);
	printf("value y: %d\n", y);


	test(&x, &y);

	printf("value x: %d\n", x);
	printf("value y: %d\n", y);

	return 0;
}

void test(int *m, int *p){ 
	*m=4;
	*p=3;
}