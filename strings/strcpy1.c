#include <stdio.h>

void my_strcpy(char *s, char *t){ // t в s
	int i=0;

	while ( (s[i] = t[i]) != '\0' )
		i++;

}

int main(){

	char n1[]="Hello";
	char n2[10];
 
 my_strcpy(n2, n1);
 printf("%s\n", n2);

}