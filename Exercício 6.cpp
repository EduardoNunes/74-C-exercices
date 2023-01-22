#include <stdio.h>
#include <locale.h>

//Exercício 3, média ponderada.

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario, grat, imposto;
	
	printf("Informe o salário:\n");
	scanf("%f", &salario);
	
	grat = (salario*5)/100;
	imposto = (salario*7)/100;
	salario = salario + grat-imposto;
	
	printf("O salário líquido é:\n%.2f", salario);
}
	
	
