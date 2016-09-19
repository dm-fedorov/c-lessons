#include <stdio.h>

int main(){

    int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    
    int i;    


    for (i = 0; i < sizeof(m)/sizeof(m[0]); i++) /* (*m) */
        printf("[%d] = %d\n", i, m[i]);

    return 0;
}
