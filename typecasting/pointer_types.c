#include <stdio.h>

int main() {
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};

	char *char_pointer;
	int *int_pointer;

	char_pointer = char_array;
	int_pointer = int_array;

	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[integer pointer] points to %p, which contains the integer %d\n", int_pointer, *int_pointer);
		int_pointer++;
	}
	
	for(i=0; i < 5; i++) { // iterate through the char array with the char_pointer
		printf("[char pointer] points to %p, which contains the char '%c'\n", char_pointer, *char_pointer);
		char_pointer++;
	}
}

/**

[integer pointer] points to 0xbf98a058, which contains the integer 1
[integer pointer] points to 0xbf98a05c, which contains the integer 2
[integer pointer] points to 0xbf98a060, which contains the integer 3
[integer pointer] points to 0xbf98a064, which contains the integer 4
[integer pointer] points to 0xbf98a068, which contains the integer 5
[char pointer] points to 0xbf98a06f, which contains the char 'a'
[char pointer] points to 0xbf98a070, which contains the char 'b'
[char pointer] points to 0xbf98a071, which contains the char 'c'
[char pointer] points to 0xbf98a072, which contains the char 'd'
[char pointer] points to 0xbf98a073, which contains the char 'e'

**/