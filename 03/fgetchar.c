#include <stdio.h>

int main(){
    
    int c, n;
    n = 0;
    
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            printf("%d\n", n);
            n = 0; 
        } else {
            n++;          
        } 

    }

    return 0;
}
