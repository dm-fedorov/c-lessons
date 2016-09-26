/* echo_eof.c -- repeats input to end of file */
#include <stdio.h>
int main(void)
{
    int ch; /*   char ch   */
    
    ch=getchar();

    putchar(ch);   	    
 
    ch=getchar();

    putchar(ch);   	    
 
    return 0;
}
