
#include <stdio.h>

int main(){
	
  	int x =  2147483648;
	int y = -2147483648; 

	if (x==y){
		printf("Why?!\n");
	}

	char a =  128;
	char b =  -128;

	if (a==b){
		printf("Why?! why?!\n");
	}
}