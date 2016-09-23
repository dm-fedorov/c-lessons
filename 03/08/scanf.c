#include <stdio.h>

int main(){

  int x;
  char name[40];

  scanf("%d", &x);
  scanf("%39s", name);

  printf("%d\n", x);
  printf("%s\n", name);

  return 0;
}
