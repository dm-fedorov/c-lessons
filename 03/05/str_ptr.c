#include <stdio.h>

int main(){

     char str[] = "Hello";
     char *ptr = "Hello";

     str[4]=0;
     /* ptr[4]=0; */	
   
     printf("%d %d", sizeof(str), sizeof(ptr));

}
