#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define DEBUG

char *concat(const char *s1, const char *s2)
{
	char *result;

	result = malloc(strlen(s1) + strlen(s2) + 1); // длина строки + '\0'
	if (result == NULL){
		printf("Error!\n");
		exit(EXIT_FAILURE); // EXIT_FAILURE==1; EXIT_SUCCESS==0
	}

#ifdef DEBUG
	printf("%s\n", result);
#endif

	strcpy(result, s1);
	strcat(result, s2);

	return result;
}

int main(){

	char *p = concat("abc", "def");

	printf("%s\n", p);

	free(p);

#ifdef DEBUG
	printf("%s\n", p);
#endif
}