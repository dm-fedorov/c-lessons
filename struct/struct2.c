#include <stdio.h>

struct like {
	const char *food;
	int time;
};

struct fish {
	const char *name;
	int teeth;
	int age;
	struct like lk;
	// int color;
};

void fish_info(struct fish);

int main()
{
	
	struct fish f1 = {"Name1", 4, 3, {"Food1", 45}};
	
	fish_info(f1);

	return 0;
}

void fish_info(struct fish f){

	printf("%s %d %d %s %d\n", f.name, f.teeth, f.age, f.lk.food, f.lk.time);

}
