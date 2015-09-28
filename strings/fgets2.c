#include <stdio.h>
#define LEN 5

int main(){
	
	char name[LEN]; 

	puts("Введите имя или пустую строку для выхода!");

	while (fgets(name, LEN, stdin) !=NULL && name[0]!= '\n') // если больше LEN
		fputs(name, stdout);	
	
    puts("Работает!"); 

    return 0;
}