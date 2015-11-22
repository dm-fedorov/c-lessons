#include <stdio.h>

int main() {
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};

	unsigned int hacky_nonpointer;

	hacky_nonpointer = (unsigned int) char_array;

	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[hacky_nonpointer] points to %p, which contains the char '%c'\n",
            hacky_nonpointer, *((char *) hacky_nonpointer));
		hacky_nonpointer = hacky_nonpointer + sizeof(char);
	}

	hacky_nonpointer = (unsigned int) int_array;
	
	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[hacky_nonpointer] points to %p, which contains the integer %d\n",
            hacky_nonpointer, *((int *) hacky_nonpointer));
		hacky_nonpointer = hacky_nonpointer + sizeof(int);
	}
}

/***

[hacky_nonpointer] points to 0xbfb20133, which contains the char 'a'
[hacky_nonpointer] points to 0xbfb20134, which contains the char 'b'
[hacky_nonpointer] points to 0xbfb20135, which contains the char 'c'
[hacky_nonpointer] points to 0xbfb20136, which contains the char 'd'
[hacky_nonpointer] points to 0xbfb20137, which contains the char 'e'
[hacky_nonpointer] points to 0xbfb2011c, which contains the integer 1
[hacky_nonpointer] points to 0xbfb20120, which contains the integer 2
[hacky_nonpointer] points to 0xbfb20124, which contains the integer 3
[hacky_nonpointer] points to 0xbfb20128, which contains the integer 4
[hacky_nonpointer] points to 0xbfb2012c, which contains the integer 5

***/

