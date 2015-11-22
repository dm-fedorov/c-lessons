#include <stdio.h>
#include <string.h>

#define SIZE 80

/***

#include <string.h>
void *memcpy(void *to, const void *from, size_t count);

***/

void show_array(const int *array, int n)
{
	int i;

	for (i=0; i<n; i++)
		printf("%d ",array[i]);
	putchar('\n');
}

int main(void)
{
  int val[SIZE] = {1,2,3,4,5,6,7,8,9};
  int target[SIZE];

  show_array(target, SIZE);
  putchar('\n');
  show_array(val, SIZE);
  putchar('\n');

  memcpy(target, val, SIZE*sizeof(int));
  show_array(target, SIZE);
  putchar('\n');

  return 0;
}