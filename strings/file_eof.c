#include <stdio.h>
#include <stdlib.h> // exit()

int main(){

	int ch;
	FILE * fp;
	char fname[50];

	printf("Введите имя файла: ");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp==NULL){
		printf("Ошибка открытия файла. Завершение программы");
		exit(1);
	}

	while ( (ch=getc(fp)) != EOF)
		putchar(ch);

	fclose(fp);
}