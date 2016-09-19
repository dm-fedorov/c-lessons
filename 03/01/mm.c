#include <stdio.h>

int main(){
    
    int m[20]; /* int *m; */
    int *p;

    m[0]=3;
    m[1]=4;

    p = m; // &m[0];

    printf("%d %d %d %d\n", p[0], *p, p[1], *(p+1)); 

    return 0;
}
