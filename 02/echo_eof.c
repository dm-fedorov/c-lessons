/* echo_eof.c -- repeats input to end of file */
#include <stdio.h>
int main(void)
{
    int ch;
    
    while ((ch = getchar()) != EOF) // -1
	putchar(ch);
    
    return 0;
}
