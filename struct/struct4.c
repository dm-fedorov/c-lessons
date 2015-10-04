#include <stdio.h>

typedef struct {
	const char *name;
	int age;
} person;

void edit_age(person *);

int main()
{
	person p1 = {"Ivan", 24};

	printf("%d\n", p1.age);
	edit_age(&p1);
	printf("%d\n", p1.age);
}

void edit_age(person *p){
	(*p).age = (*p).age + 1; // p->age = p->age+1	
}
