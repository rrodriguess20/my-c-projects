#include <stdio.h>
#include <stdlib.h>

int main(){

	float salario = 1000.00;
	float aumento = 0.015;

	salario = salario + (salario * aumento);
	printf("Salario atual: %.2f\n", salario);

	for(int i = 2015; i<2025; i++){

		salario = salario + (salario * (aumento*2));
	}

	printf("Salario atual: %.2f\n", salario);

	return 0;
}