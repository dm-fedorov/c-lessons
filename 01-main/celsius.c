/* 
Перевод температуры по Фаренгейту в шкалу Цельсия 
                    С=(5/9)*(F-32)
*/

#include <stdio.h>

int main(){

	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // нижняя граница температур
	upper = 300; // верхняя граница
	step = 20; // величина шага

	fahr = lower;

	while (fahr <= upper){

		celsius = 5 * (fahr-32) / 9;  
		printf("%d\t %d\n", fahr, celsius);
		fahr = fahr + step;
	}

}
