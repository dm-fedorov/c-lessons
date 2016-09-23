#include <stdio.h>

int main(){

  char food[5];

  printf("Enter food:");

  // gets();


  fgets(food, sizeof(food), stdin);

  puts(food);

}
