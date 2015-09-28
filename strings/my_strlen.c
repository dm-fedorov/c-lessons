#include <stdio.h>

int my_strlen(char * s){ // (char s[])
	int n;

	for (n=0; *s != '\0'; s++)
		n++;

	return n;
}

int main(){

	char n[]="Hello";
 
 printf("%d\n", my_strlen(n));

}