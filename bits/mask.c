
#include <stdio.h>

#define MASK 2 // 00000010

int main(){

	unsigned char flags; // from 0 to 255

	flags=10   ; // 00001010

	flags = flags & MASK; // 00001010 & 00000010 = 00000010
	// flags &= MASK;
	

}