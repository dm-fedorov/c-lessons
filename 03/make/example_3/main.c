#include <stdio.h>

#include "encrypt.h"
#include "checksum.h"

int main(){

	char s[]="Hello";

	encrypt(s); // шифрование

	printf("%s\n", s);
	printf("%d\n", checksum(s));

	encrypt(s); // дешифрование

	printf("%s\n", s);
	printf("%d\n", checksum(s));	

}
