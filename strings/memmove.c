#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(void)
{
  char str[SIZE];
  char *p;

  strcpy(str, "Hello aaaaaaaaaaa bbbbbbbb ccccccc!\n");
  p = str + 10;

  // копируем в этот же массив! а-а-а-а-а! 
  memmove(str, p, SIZE); 
  printf("результат сдвига: %s", str);

  return 0;
}