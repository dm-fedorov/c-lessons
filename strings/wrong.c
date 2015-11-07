#include <stdio.h>
#include <string.h>

char *duplicate(const char *p){
	char q[20];

	strcpy(q, p);
	printf("into fun: %s\n", q);
	return q;
}

int main(){

	char *s="Hello";
	printf("into main: %s\n", duplicate(s));

}