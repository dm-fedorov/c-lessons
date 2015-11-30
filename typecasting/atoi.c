#include <stdio.h>

/* atoi: преобразование s в целое */
int atoi(char s[])
{
   int i, n;
   n = 0;
   for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	n = 10 * n + (s[i] - '0');
	
   return n;
}

int main(){

   char *s="123";
   printf("%d\n", atoi(s));

} 
