#include <stdio.h>


int str_copy(char *dest, const char *src){ /* strcpy() */
    
    while (*dest++ = *src++)
	;
}


int main(){

    char s1[] = "Hello!";
    char s2[30]; 

    s1[2]='4';
    
    str_copy(s2, s1);

    printf("%s\n", s2); 

    return 0;
}
