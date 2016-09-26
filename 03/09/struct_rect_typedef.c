#include <stdio.h>

int main(){

	typedef int Lenght;

	Lenght maxlen = 6;

	typedef struct {
		int x;
		int y;
	} Point;
	
	typedef struct {
		Point pt1;
		Point pt2;		
	} Rect;
		
	Rect screen;

	printf("%d\n" , maxlen);

	screen.pt1.x = 3;
	screen.pt1.y = 3;
	
	printf("%d, %d\n" , screen.pt1.x, screen.pt1.y);


	return 0;
}
