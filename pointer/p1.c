#include <stdio.h>

int main(void)
{
	int *p;  // указатель на целое
	int i=2;	

	p=&i;  // взятие адреса

	printf("address: %p\n", p); // адрес 
	printf("value: %d\n", *p);  // значение

	return 0;
}