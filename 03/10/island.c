#include <stdio.h>

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

int main(){


island a = {"A", "9-00", "19-00", NULL};
island b = {"B", "9-00", "20-00", NULL};
island c = {"C", "10-00", "18-00", NULL};
island d = {"D", "9-00", "14-00", NULL};

a.next = &b;
b.next = &c;
c.next = &d;

island e = {"E", "9-00", "14-00", NULL};

display(&a);

return 0;

}
