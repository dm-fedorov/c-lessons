#include <stdio.h>

typedef struct {
	const char *food;
	int time;
} like;

typedef struct {
	const char *name;
	int teeth;
	int age;
	like lk;
	// int color;
} fish;

void fish_info(fish);

int main()
{
	
	fish f1 = {"Name1", 4, 3, {"Food1", 45}};
	
	fish_info(f1);

	return 0;
}

void fish_info(fish f){
	printf("%s %d %d %s %d\n", f.name, f.teeth, f.age, f.lk.food, f.lk.time);
}
