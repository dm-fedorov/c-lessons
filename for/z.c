
/*
Подсчет суммы последовательности вида:

1 + 1/2 + 1/4 + 1/8 + 1/16 + ... + 1/2^n
*/

#include <stdio.h>

int main(){

	int n;
	double res, power_2;
	int limit;

	printf("Введите кол-во элементов последовательности: ");
	scanf("%d", &limit);

	for (res=0, power_2=1, n=1; n<=limit; n++, power_2 *=2.0){
		res += 1.0/power_2;
		printf("Результат %fl при кол-ве элементов %d \n", res, n);
	}

	return 0;
}