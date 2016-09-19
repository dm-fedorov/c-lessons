#include <stdio.h>
#include <math.h>
#include <stdlib.h> /* malloc(), free() */

int main(){
    
    /* 
       void *malloc(int size); 
       void free(void *p);  
    */

    int i;	
    double *k;

    k = malloc(360*sizeof(double));

    for (i = 0; i < 360; i++)
        k[i] = sin((2*M_PI/360.0) * (double)i);
    
    for (i = 0; i < 10; i++)
	printf("%fl ", k[i]);

    free(k);

    return 0;
}
