#include <stdio.h>

int main(){

	char name1[11], name2[11];

	int c;

	c=scanf("%5s %10s", name1, name2);

	printf("Прочитано %d - %s и %s.\n", c, name1, name2);


}