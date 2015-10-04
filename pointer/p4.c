#include <stdio.h>

int *test(int *);

int main(void)
{
	int x=0, y=1;

	printf("result if x=%d: %p\n", x, test(&x));
	printf("result if y=%d: %p\n", y, test(&y));

	return 0;
}

int *test(int *m){ 
	if (*m==0)
		return NULL; 
	else
		return m;
}