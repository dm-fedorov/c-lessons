#include <stdio.h>

int main(){

	struct point {
		int x;
		int y;
	};
	
	struct point pt;

	struct point maxpt = { 320 ,200 };
	

	printf("%d, %d\n" , maxpt.x, maxpt.y);

	pt.x = 3;
	pt.y = 4;

	printf("%d, %d\n" , pt.x, pt.y);


	return 0;
}
