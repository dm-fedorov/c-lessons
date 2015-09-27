#include <stdio.h>

#define MSG "Строковая символьная константа."

int main(){
	
	char a[] = MSG;

	const char *sp = MSG;

	printf("Адрес строки: %p\n", "Строковая символьная константа.");
 	printf("адрес a: %p\n", a);
 	printf("адрес sp: %p\n", sp);
 	printf("адрес MSG: %p\n", MSG);

    return 0;
}