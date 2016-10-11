#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main ()
{
  int seed;
  int i;

  i = 0;
  seed = time(NULL);
  srand(seed);

  while (i < 5){
 	sleep(1);

 	printf("rand[%d]= %d\n", i, rand()%3);
	++i;
  }
}