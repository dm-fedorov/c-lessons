#include <stdio.h>

int main(void)
{
	int i, j, *p, *q;
	
	p=&i; // взятие адреса
 
	q=p;  // копирование адреса

	*p=1;
	*q=2;

	printf("value p: %d\n", *p);
	printf("value q: %d\n", *q);

	return 0;
}