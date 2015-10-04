#include <stdio.h>

// создаем новый тип данных
struct fish {
	const char *name;
	int teeth;
	int age;
	// int color;
};

void fish_info(struct fish);

int main()
{
	struct fish f1 = {"Name1", 4, 3};

	fish_info(f1);

	return 0;
}

void fish_info(struct fish f){

	printf("%s %d %d\n", f.name, f.teeth, f.age);

}
