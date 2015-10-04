#include <stdio.h>

#define MSG "Строковая символьная константа."
//#define MAX 18

int main(){
	char w[] = "abcde"; // 3 - имя массивая не является переменной
	const char *sp = "111111."; // x=3
 
	puts(MSG);
	puts(w);
	puts(sp);

   
    w[1]='k';
    puts(w);

    sp=w;

    puts(sp);

    return 0;
}