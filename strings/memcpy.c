#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(void)
{
  char buf1[SIZE], buf2[SIZE];

  strcpy(buf1, "Hello!\n");
  memcpy(buf2, buf1, SIZE);
  printf(buf2);

  return 0;
}