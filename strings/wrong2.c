#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(const char *p){
	char *q = (char *) malloc(20);

	strcpy(q, p);
	printf("into fun: %s\n", q);
	return q;
}

int main(){

	char *s="Hello";

	char *d=duplicate(s);
	printf("into main(1): %s\n", d);

	free(d);

	printf("into main(2): %s\n", d);

}