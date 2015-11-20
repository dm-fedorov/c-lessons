#include <stdio.h>

int main(){
	// важно!

	char amessage[] = "now!"; // массив
	char *pmessage = "now!"; // указатель

	/*
	amessage - массив символов, можем менять отдельные символы в строке, но amessage всегда
	будет указывать на один и тот же участок памяти.

	pmessage - указатель, указывает на строковую константу, можем изменить указатель, но не можем 
	изменить содержимое строки.

	*/ 

	printf("%s\n",amessage);
	amessage[1]='7';
	printf("%s\n",amessage);
	
	pmessage=amessage;
	printf("%s\n",pmessage);
	
}