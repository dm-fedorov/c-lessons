#include <stdio.h>

int main() {
   float c, d;

   int a = 13;
   int b = 5;

   c = a / b;                  // divide using integers
   d = (float) a / (float) b;  // divide integers typecast as floats

   printf("[integers]\t a = %d\t b = %d\n", a, b);
   printf("[floats]\t c = %f\t d = %f\n", c, d);
}
/**

[integers]	 a = 13	 b = 5
[floats]	 c = 2.000000	 d = 2.600000

**/
	
