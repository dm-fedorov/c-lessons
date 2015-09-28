#include <stdio.h>
#define LEN 20

int main(){
	
	char name[LEN]; // длина массива ограничена

	puts("Введите строку!");

	fgets(name, LEN, stdin); // сохраняет символ новой строки 
    
    printf("%s\n", name); 

	puts(name); // добавляет в вывод собственный символ новой строки

	fputs(name, stdout); 

    return 0;
}