#include <stdio.h>

void swap(int x, int y){

    int tmp;
     
    tmp = x;
    x = y;
    y = tmp;

}


void swap2(int *px, int *py){

    int tmp;
    
    tmp = *px;
    *px = *py;
    *py = tmp;
}


int main(){

    int a=6, b=7;

    swap(a, b);

    printf("%d %d\n", a, b);	

    swap2(&a, &b);

    printf("%d %d\n", a, b);	

    return 0;

}
