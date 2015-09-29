#include <stdio.h>

#define MSG "Строковая символьная константа."
//#define MAX 18

int main(){
	char w[] = "abcde"; // 3 - имя массивая не является переменной
	char *sp = "111111."; // x=3
 
	puts(MSG);
	puts(w);
	puts(sp);

   
    w[1]='k';
    puts(w);

    //sp[3]='4';

    sp=w;

   //sp[3]='4';

    puts(sp);

    return 0;
}