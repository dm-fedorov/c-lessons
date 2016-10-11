#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	printf("RAND_MAX is %u\n", RAND_MAX);
	srand(time(0));

	printf("random values from 0 to RAND_MAX\n");
	for(i=0; i < 8; i++)
		printf("%d\n", rand());
	printf("random values from 1 to 20\n");
	for(i=0; i < 8; i++)
		printf("%d\n", (rand()%20)+1);
}

/***

RAND_MAX is 2147483647
random values from 0 to RAND_MAX
608250578
713466962
1235336005
444207745
79963523
840040187
256197404
1435264798
random values from 1 to 20
7
20
18
7
17
15
11
1

***/
