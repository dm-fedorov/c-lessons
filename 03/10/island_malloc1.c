#include <stdio.h>
#include <stdlib.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island * next;
} island;

void display(island *start){
	island *i = start;
	for ( ; i != NULL; i=i->next){ /* i=(*i).next */
		printf("Name %s, open %s, close %s\n", i->name, i->opens, i->closes);
	}
}

island *create (char *name){
	island *i = malloc(sizeof(island));
	i->name = name;
	i->opens = "9-00";
	i->closes = "18-00";
	i->next = NULL;
	return i;
}

int main(){

char name[80];
fgets(name, 80, stdin);
island *p_island0 = create(name);
fgets(name, 80, stdin);
island *p_island1 = create(name);
p_island0->next = p_island1;

display(p_island0);
free(p_island0);
free(p_island1);
return 0;

}
