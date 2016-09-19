#include <stdio.h>


int str_len(const char *str){ /* strlen() */
    int i = 0;
    
    while (str[i] !='\0')
        i++;

    return i;
}


int main(){

    char s[] = "Hello!";
    
    printf("%d\n", str_len(s)); 

    return 0;
}
