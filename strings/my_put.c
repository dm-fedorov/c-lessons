#include <stdio.h>

void my_put(const char * string){

	while (*string)
		putchar(*string++);
}

int main(){
	char name[]="Привет!";

	my_put(name);	
	
}