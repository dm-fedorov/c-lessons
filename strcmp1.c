#include <stdio.h>
#include <string.h>

int main(){
	char name1[]="Привет!";
	char name2[]="привет!";

	printf("%d", strcmp(name1, name2));
}