#include <stdio.h>
#include <time.h> // for clock_gettime
#include <unistd.h>

int main(){
  
	/* Мануал: http://all-ht.ru/inf/prog/c/func/clock_gettime.html */

    struct timespec start, end;
	clock_gettime(CLOCK_MONOTONIC_RAW, &start);

	// some work
	sleep(5);

	clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	printf("Time taken: %lf sec.\n", end.tv_sec-start.tv_sec + 0.000000001*(end.tv_nsec-start.tv_nsec));
	return 0;
}