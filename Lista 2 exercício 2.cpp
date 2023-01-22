#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 2, função salário.

void horatrab();

float salario, horas;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o número de horas trabalhadas:\n");
	scanf("%f", &horas);
	printf("Informe o valor do salário mínimo:\n");
	scanf("%f", &salario);
	
	horatrab();
}

void horatrab(){
	float htrab, bruto, imp, receber;
	
	htrab = salario/2;
	bruto = horas*htrab;
	imp = (bruto*3)/100;
	receber = bruto-imp;
	
	printf("\nO salário a receber é:\n%.2f\n", receber);
}
