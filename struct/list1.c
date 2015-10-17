#include <stdio.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

void display(island *);

int main(){

	island i1 = {"Name1", "9:00", "18:00", NULL};
	island i2 = {"Name2", "10:00", "16:00", NULL};

	i1.next = &i2; // присваиваем адрес!!! 

	display(&i1);

	// новый остров - новая переменная типа island? а если из файла?
}

void display(island *start){
	
	island *i = start;

	for (; i != NULL; i=i->next){

		printf("%s %s %s\n", i->name, i->opens, i->closes);
	}
}

