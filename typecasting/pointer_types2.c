#include <stdio.h>

int main() {
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};

	char *char_pointer;
	int *int_pointer;

	char_pointer = int_array; // The char_pointer and int_pointer now
	int_pointer = char_array; // point to incompatable data types

	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[integer pointer] points to %p, which contains the char '%c'\n",
            int_pointer, *int_pointer);
		int_pointer = int_pointer + 1;
	}
	
	for(i=0; i < 5; i++) { // iterate through the char array with the char_pointer
		printf("[char pointer] points to %p, which contains the integer %d\n",
            char_pointer, *char_pointer);
		char_pointer = char_pointer + 1;
	}
}

/***

[integer pointer] points to 0xbf8e717f, which contains the char 'a'
[integer pointer] points to 0xbf8e7183, which contains the char 'e'
[integer pointer] points to 0xbf8e7187, which contains the char '�'
[integer pointer] points to 0xbf8e718b, which contains the char '�'
[integer pointer] points to 0xbf8e718f, which contains the char ''
[char pointer] points to 0xbf8e7168, which contains the integer 1
[char pointer] points to 0xbf8e7169, which contains the integer 0
[char pointer] points to 0xbf8e716a, which contains the integer 0
[char pointer] points to 0xbf8e716b, which contains the integer 0
[char pointer] points to 0xbf8e716c, which contains the integer 2

***/