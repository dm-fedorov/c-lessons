#include <stdio.h>

int main() {
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};

	char *char_pointer;
	int *int_pointer;

	char_pointer = (char *) int_array; // Typecast into the
	int_pointer = (int *) char_array;  // pointer's data type

	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[integer pointer] points to %p, which contains the char '%c'\n",
            int_pointer, *int_pointer);
		int_pointer = (int *) ((char *) int_pointer + 1);
	}
	
	for(i=0; i < 5; i++) { // iterate through the char array with the char_pointer
		printf("[char pointer] points to %p, which contains the integer %d\n",
            char_pointer, *char_pointer);
		char_pointer = (char *) ((int *) char_pointer + 1);
	}
}

/***

[integer pointer] points to 0xbf92026f, which contains the char 'a'
[integer pointer] points to 0xbf920270, which contains the char 'b'
[integer pointer] points to 0xbf920271, which contains the char 'c'
[integer pointer] points to 0xbf920272, which contains the char 'd'
[integer pointer] points to 0xbf920273, which contains the char 'e'
[char pointer] points to 0xbf920258, which contains the integer 1
[char pointer] points to 0xbf92025c, which contains the integer 2
[char pointer] points to 0xbf920260, which contains the integer 3
[char pointer] points to 0xbf920264, which contains the integer 4
[char pointer] points to 0xbf920268, which contains the integer 5

***/