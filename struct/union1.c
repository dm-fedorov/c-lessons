#include <stdio.h>

int main(){

	typedef union {
		int d;
		double b;
		char l;
	} hold;

	hold fit;

	fit.d=45;

	printf("%d\n",fit.d);	

	fit.l='f';

	printf("%c\n",fit.l);	


}