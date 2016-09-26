#include <stdio.h>

int main(){

	struct point {
		int x;
		int y;
	};
	
	struct rect {
		struct point pt1;
		struct point pt2;		
	};
		
	struct rect screen;


	screen.pt1.x = 3;
	screen.pt1.y = 3;
	
	printf("%d, %d\n" , screen.pt1.x, screen.pt1.y);


	return 0;
}
